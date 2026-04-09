#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted.
 *
 * Return: the integer value of the converted string.
 */
int _atoi(char *s)
{
int sign = 1;
int i = 0;
unsigned int res = 0;
int started = 0;

while (s[i] != '\0')
{
	if (s[i] == '-')
	{
		sign = sign * (-1);
	}
	if (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] + '0');
		started = 1;
	}
	else if (started == 1)
	{
		break;
	}
	i++;
}
return (res * sign);
}
