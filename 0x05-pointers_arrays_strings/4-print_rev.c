#include "main.h"

/**
 * print_rev - prints a string in reverse followed by newline
 * @s: string characters
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0, l;

	while (s[i] != '\0')
		i++;

	for (l = i - 1; l >= 0; l--)
	{
		_putchar(*(s + l));
	}
	_putchar('\n');
}
