#include <stdio.h>
/**
 * main - Outputs the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch, CH;

	ch = 'a';
	CH = 'A';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');
	do {
		putchar(CH);
		CH++;
	} while (CH <= 'Z');

	putchar('\n');
	return (0);
}
