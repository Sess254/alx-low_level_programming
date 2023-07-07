/*
 * File: 0-hash_table_create.c
 * Auth: Sess254
 */

#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: if somthing goes wrong - NULL - the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs_t;
	unsigned long int n;

	hs_t = malloc(sizeof(hash_table_t));
	if (hs_t == NULL)
	{
		return (NULL);
	}

	hs_t->size = size;
	hs_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hs_t->array == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		hs_t->array[n] = NULL;
	}
	return (hs_t);
}
