#include "main.h"
/**
 * void - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
