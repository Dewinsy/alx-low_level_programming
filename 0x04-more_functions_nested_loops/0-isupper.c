#include <stdio.h>
/**
 * _isupper - check whether c is uppercase.
 *
 * @c: character
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
