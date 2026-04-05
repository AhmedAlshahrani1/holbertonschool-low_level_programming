#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int row = 0;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < n)
		{
			space = 0;
			while (space < row)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			row++;
		}
	}
}
