#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i = 0, l_n = 0, l_o = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	while (name[l_n] != '\0')
		l_n++;
	while (owner[l_o] != '\0')
		l_o++;
	ptr->name = malloc(l_n + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(l_o + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	while (i <= l_n)
	{
		ptr->name[i] = name[i];
		i++;
	}
	i = 0;
	while (i <= l_o)
	{
		ptr->owner[i] = owner[i];
		i++;
	}
	ptr->age = age;
	return (ptr);
}
