#include "hash_tables.h"
/**
 * key_index - get desired index for key
 * @key: key of hash code
 * @size: size of hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
