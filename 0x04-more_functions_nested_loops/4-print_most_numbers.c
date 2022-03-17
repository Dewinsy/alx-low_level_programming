#include <stdio.h>

/**
 * print_most_numbers - print numbers 0-9, eaxcept 2 and 4.
 *
 * @n: number
 *
 * Return: Always 0.
 */
int print_most_numbers(int n)
{
	for (n = 48; n < 58; n++)
	{
		if (n != 50)
			if (n != 52)
				putchar(n);
	}
	putchar('\n');

	return (0);
}
