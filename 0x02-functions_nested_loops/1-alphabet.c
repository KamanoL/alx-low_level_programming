#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase followed by a newline
 * Return: Nothing
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
