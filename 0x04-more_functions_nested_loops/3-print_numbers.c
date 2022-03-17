#include <stdio.h>

/**
 * print_numbers - print numbers 0-9.
 *
 * @n: number
 *
 * Return: Always 0.
 */
int print_numbers(int n)
{
	for (n = 48; n < 58; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
