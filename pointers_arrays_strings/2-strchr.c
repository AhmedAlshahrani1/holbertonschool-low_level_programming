#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to look for
 *
 * Return: a pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]); /* المطب الأول: نرجع عنوان الصندوق اللي في الطابور */
		}
		i++;
	}

	/* المطب الثالث: لو كان الحرف المطلوب هو \0 نفسه، نصيده هنا */
	if (s[i] == c)
	{
		return (&s[i]);
	}

	return (NULL); /* المطب الثاني: لازم تكون حروف كبيرة */
}
