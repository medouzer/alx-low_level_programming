#include "hash_tables.h"

/**
 * hash_table_get - this to retrieves a value associated with a key
 * @ht: is the Hash table
 * @key: this is The key
 * Return: this is the value associated with the element,
 *  or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *cur;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	cur = ht->array[index];
	while (cur)
	{
		if (strcmp(cur->key, key) == 0)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
