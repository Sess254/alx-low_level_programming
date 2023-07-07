/*
 * File: 3-hash_table_set.c
 * Auth: Sess254
 */

#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: pointer to hash table
 * @key: key to add
 * @value: value associated with key
 *
 * Return: if it fails - 0, otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *val_cpy;
	unsigned long int n, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (n = index; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = val_cpy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_cpy);
		return (0);
	}

	new->value = val_cpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
