#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int i;
	int j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (let[j] == str[i])
			{
				str[i] = num[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
