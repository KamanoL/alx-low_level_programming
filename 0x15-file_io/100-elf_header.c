#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * strn_cmp - checks different strings
 * @s1: first string
 * @s2: second string
 * @a: max number of bytes
 *
 * Return: 0 if s1 and s2 are equal, else non-zero
 */
int strn_cmp(const char *s1, const char *s2, size_t a)
{
    for ( ; a && *s1 && *s2; --a, ++s1, ++s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
    }
    if (a)
    {
        if (*s1)
            return (1);
        if (*s2)
            return (-1);
    }
    return (0);
}

/**
 * _close - close program
 * @fd: file descriptor to end
 */
void _close(int fd)
{
    if (close(fd) != -1)
        return;
    write(STDERR_FILENO, "Error: Can't close fd\n", 22);
    exit(98);
}

/**
 * _read - read a file and returns failure
 * @fd: file descriptor to read
 * @buff: buffer
 * @coun: number of bytes
 */
void _read(int fd, char *buff, size_t coun)
{
    if (read(fd, buff, coun) != -1)
        return;
    write(STDERR_FILENO, "Error: Can't read from file\n", 28);
    _close(fd);
    exit(98);
}

/**
 * elf_magic - returns ELF magic
 * @buff: ELF header
 */
void elf_magic(const unsigned char *buff)
{
    unsigned int k;

    if (strn_cmp((const char *) buff, ELFMAG, 4))
    {
        write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
        exit(98);
    }

    printf("ELF Header:\n  Magic:   ");

    for (k = 0; k < 16; ++k)
        printf("%02x%c", buff[k], k < 15 ? ' ' : '\n');
}

/**
 * elf_class - returns elf class
 * @buff: elf header
 *
 * Return: bit mode (32 or 64)
 */
size_t elf_class(const unsigned char *buff)
{
    printf("  %-34s ", "Class:");

    if (buff[EI_CLASS] == ELFCLASS64)
    {
        printf("ELF64\n");
        return (64);
    }
    if (buff[EI_CLASS] == ELFCLASS32)
    {
        printf("ELF32\n");
        return (32);
    }
    printf("<unknown: %x>\n", buff[EI_CLASS]);
    return (32);
}

/**
 * elf_data - prints data
 * @buff: elf
 *
 * Return: 1 if big endian else otherwise 0
 */
int elf_data(const unsigned char *buff)
{
    printf("  %-34s ", "Data:");

    if (buff[EI_DATA] == ELFDATA2MSB)
    {
        printf("2's complement, big endian\n");
        return (1);
    }
    if (buff[EI_DATA] == ELFDATA2LSB)
    {
        printf("2's complement, little endian\n");
        return (0);
    }
    printf("Invalid data encoding\n");
    return (0);
}

/**
 * elf_version - prints version
 * @buff: elf
 */
void elf_version(const unsigned char *buff)
{
    printf("  %-34s %u", "Version:", buff[EI_VERSION]);

    if (buff[EI_VERSION] == EV_CURRENT)
        printf(" (current)\n");
    else
        printf("\n");
}

/**
 * elf_osabi - prints OS/ABI
 * @buff: elf
 */
void elf_osabi(const unsigned char *buff)
{
    const char *os_table[19] = {
        "UNIX - System V",
        "UNIX - HP-UX",
        "UNIX - NetBSD",
        "UNIX - GNU",
        "<unknown: 4>",
        "<unknown: 5>",
        "UNIX - Solaris",
        "UNIX - AIX",
        "UNIX - IRIX",
        "UNIX - FreeBSD",
        "UNIX - Tru64",
        "Novell - Modesto",
        "UNIX - OpenBSD",
        "VMS - OpenVMS",
        "HP - Non-Stop Kernel",
        "AROS",
        "FenixOS",
        "Nuxi CloudABI",
        "Stratus Technologies OpenVOS"
    };

    printf("  %-34s ", "OS/ABI:");

    if (buff[EI_OSABI] < 19)
        printf("%s\n", os_table[(unsigned int) buff[EI_OSABI]]);
    else
        printf("<unknown: %x>\n", buff[EI_OSABI]);
}

/**
 * elf_abiv - prints version
 * @buff: elf
 */
void elf_abiv(const unsigned char *buff)
{
    printf("  %-34s %u\n", "ABI Version:", buff[EI_ABIVERSION]);
}

/**
 * elf_type - prints type
 * @buff: buffer
 * @big_endian: endianness if \0
 */
void elf_type(const unsigned char *buff, int big_endian)
{
    char *type_table[5] = {
        "NONE (No file type)",
        "REL (Relocatable file)",
        "EXEC (Executable file)",
        "DYN (Shared object file)",
        "CORE (Core file)"
    };
    unsigned int type;

    printf("  %-34s ", "Type:");

    if (big_endian)
        type = 0x100 * buff[16] + buff[17];
    else
        type = 0x100 * buff[17] + buff[16];

    if (type < 5)
        printf("%s\n", type_table[type]);
    else if (type >= ET_LOOS && type <= ET_HIOS)
        printf("OS Specific: (%4x)\n", type);
    else if (type >= ET_LOPROC && type <= ET_HIPROC)
        printf("Processor Specific: (%4x)\n", type);
    else
        printf("<unknown: %x>\n", type);
}

/**
 * elf_entry - shows entry point address
 * @buff: string to entry point
 * @bit_mode: bit mode
 * @big_endian: endianness
 */
void elf_entry(const unsigned char *buff, size_t bit_mode, int big_endian)
{
    int address_size = bit_mode / 8;

    printf("  %-34s 0x", "Entry point address:");

    if (big_endian)
    {
        while (address_size && !*(buff))
            --address_size, ++buff;

        printf("%x", *buff & 0xff);

        while (--address_size > 0)
            printf("%02x", *(++buff) & 0xff);
    }
    else
    {
        buff += address_size;

        while (address_size && !*(--buff))
            --address_size;

        printf("%x", *buff & 0xff);

        while (--address_size > 0)
            printf("%02x", *(--buff) & 0xff);
    }

    printf("\n");
}

/**
 * main - duplicate file content to the next
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 Always (Success)
 */
int main(int argc, const char *argv[])
{
    unsigned char buff[18];
    unsigned int bit_mode;
    int big_endian;
    int fd;

    if (argc != 2)
    {
        write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        write(STDERR_FILENO, "Error: Can't read from file\n", 28);
        exit(98);
    }

    _read(fd, (char *) buff, 18);

    elf_magic(buff);
    bit_mode = elf_class(buff);
    big_endian = elf_data(buff);
    elf_version(buff);
    elf_osabi(buff);
    elf_abiv(buff);
    elf_type(buff, big_endian);

    lseek(fd, 24, SEEK_SET);
    _read(fd, (char *) buff, bit_mode / 8);

    elf_entry(buff, bit_mode, big_endian);

    _close(fd);

    return (0);
}
