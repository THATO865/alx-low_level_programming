#include "main.h"

/**
 * flip_bits - the number of bits you need to switch numbers
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: changed bit number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;

	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >> 1;
	}
	return (count);
}
