#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l = 0, c;
	char *begin, *end, temp;

	begin = s;
	end = s;

	while (s[l] != '\0')
		l++;

	for (c = 0; c < l - 1; c++)
		end++;

	for (c = 0; c < l / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;
		begin++;
		end--;
	}

}
