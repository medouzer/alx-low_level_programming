#include "hash_tables.h"

/**
 * hash_table_delete - this is to deletes a hash table
 * @ht: this is the Hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *cur, *tmp;

	if (!ht)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (!ht->array[i]->next)
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
			}
			else
			{
				cur = ht->array[i];
				while (cur)
				{
					tmp = cur->next;
					free(cur->key);
					free(cur->value);
					free(cur);
					cur = tmp;
				}
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
