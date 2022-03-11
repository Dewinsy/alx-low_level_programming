#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'z';
	do {
		putchar(ch);
		ch--;
	} while (ch >= 'a');
	putchar('\n');
	return (0);
}
