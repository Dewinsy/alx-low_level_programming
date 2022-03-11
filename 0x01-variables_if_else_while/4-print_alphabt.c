#include <stdio.h>
/**
 * main - Outputs the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z' && (ch != 'k' || ch != 'e'));

	putchar ('\n');

	return (0);
}
