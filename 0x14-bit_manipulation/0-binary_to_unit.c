#include "main.h"

/*
 * binary_to_unit - The function converts a binary digit to an unsigned integer
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int
binary_to_unit(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == Null)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num << 1;
		if (b[i] == '1')
			num += 1;
		i++;
	}
	return (num);
}

