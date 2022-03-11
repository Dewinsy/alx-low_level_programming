#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');

	return (0);
}
