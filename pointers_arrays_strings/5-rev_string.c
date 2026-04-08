#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int l = 0;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (l < i)
	{
		tmp = s[l];
		s[l] = s[i];
		s[i] = tmp;
		l++;
		i--;
	}
}
