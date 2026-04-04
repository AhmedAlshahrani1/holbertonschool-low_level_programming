#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int r, c, p;

	r = 0;
	while (r < 10)
	{
		c = 0;
		while (c < 10)
		{
			p = r * c;
			if (c == 0)
			{
				_putchar(p + '0');
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			c++;
		}
		_putchar('\n');
		r++;
	}
}
