#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase and new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	do {
		_putchar(ch);
		ch++;
	} while (ch <= 'z');
	_putchar('\n');

}
