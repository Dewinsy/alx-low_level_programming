#include <stdio.h>
/**
 * main - Outputs the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';  ch++)
	{
		if (ch != 'k' && ch != 'e')
			putchar (ch);
	}

	putchar ('\n');

	return (0);
}
