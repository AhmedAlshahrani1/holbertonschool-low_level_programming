#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be modified
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
			str[i] = str[i] - 32;
			}
			else
			{
				j = 0;
				while (sep[j] != '\0')
				{
					if (sep[j] == str[i - 1])
					{
					str[i] = str[i] - 32;
					break;
					}
					j++;
				}
			}
		}
		i++;
	}
	return (str);
}
