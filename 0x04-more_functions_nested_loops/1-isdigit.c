#include <stdio.h>
/**
 * _isdigit - check whether c is a digit.
 *
 * @c: character
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
