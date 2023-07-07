#include "main.h"
/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: the number to modify
 *@index: the index of the bit to set
 *Return: 1 for success, negative 1 for faliure
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1UL << index
	return (1);
}
