#include "main.h"

/**
* _puts - print a string to stdout.
* @str: The character to print.
* Return: nothing.
*/

void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
