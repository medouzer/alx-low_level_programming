#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 * @size: The size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);
	if (!table->array)
	{
		free(table->array);
		return (NULL);
	}
	return (table);
}
