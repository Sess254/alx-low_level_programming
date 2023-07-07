/*
 * File: 2-key_index.c
 * Auth: Sess254
 */

#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: the key
 * @size: size of array
 *
 * Return: index of key
 *
 * Description: uses djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
