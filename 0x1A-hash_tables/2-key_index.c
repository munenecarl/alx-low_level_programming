#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to find index of
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
