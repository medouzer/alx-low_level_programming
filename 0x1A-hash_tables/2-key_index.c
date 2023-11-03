#include "hash_tables.h"

/**
 * key_index - this gives the index of a key
 *
 * @key: this is the key to be hashed
 * @size: this is the size of the array of the hash table
 * Return: return the index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	index = hash_djb2(key) % size;

	return (index);
}
