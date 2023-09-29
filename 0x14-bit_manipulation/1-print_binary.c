#include "main.h"

/**
 * print_binary - print binary that's comparable to decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int current;

	for (a = 65; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
