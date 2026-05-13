#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
