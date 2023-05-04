/*
 *File: 5-flip_bits.c
 *Auth: Sess254
 */

#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from  one number to another
 *@n: number
 *@m: number to flip n to
 *
 *Return:number of bits to flip n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;

	unsigned long int bits = 0;

	while (diff > 0)
	{
		bits += (diff & 1);
		diff >>= 1;
	}

	return (bits);
}
