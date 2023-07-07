#include "main.h"

/**
 * get_endianness - checks the size of  endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianess(void)

{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	else
		return (0);
}
