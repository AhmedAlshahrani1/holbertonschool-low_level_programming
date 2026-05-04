#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;
	unsigned long int i;

	p = malloc(sizeof(hash_table_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->size = size;
	p->array = malloc(sizeof(hash_node_t *) * size);
	if (p->array == NULL)
	{
		free(p);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p->array[i] = NULL;
		i++;
	}
	return (p);
}
