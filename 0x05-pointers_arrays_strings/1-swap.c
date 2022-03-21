#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values if 2 integers
 * @a: integer to swap
 * @b: another integrer to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{

	int s;

	s = *a;
	*a = *b;
	*b = s;
}
