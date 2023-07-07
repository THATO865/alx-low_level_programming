#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number that will be printed in binary format
 *
 * Return : void
 */

int void print_binary(unsigned long int n)

{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
