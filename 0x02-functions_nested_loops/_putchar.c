#include "main.c"
#include <unistd.h>
/**
 * _putchar - converts c to unsigned char and then writes c to the output stream
 * 
 * @c: Charactor to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
