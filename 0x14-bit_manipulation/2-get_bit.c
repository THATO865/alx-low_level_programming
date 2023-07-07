#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *  @n: the number to check
 *  @index: the index of the bit to get
 *
 *  Return: value of bit or -1 if an error ocurred
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
