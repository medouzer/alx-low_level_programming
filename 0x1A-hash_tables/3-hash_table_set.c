#include "hash_tables.h"

/**
 * hash_table_set - this adds an element to the hash table
 *
 * @ht: the hash table to add or update the key/value to
 * @key: is the key to add to the hash table
 * @value: this is the value associated with the key
 * Return: return 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *cur;
	unsigned long int index = 0;

	if (!ht || !key || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	cur = ht->array[index];
	while (cur)
	{
		if (strncmp(key, cur->key, strlen(cur->key) + 1) == 0)
		{
			strcpy(cur->value, value);
			return (1);
		}
		cur = cur->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
