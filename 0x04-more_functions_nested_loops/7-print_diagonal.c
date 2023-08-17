#include "main.h"

/**
 * print_diagonal line on the terminal
 * @n: number of times the character
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int c, j;

		for (c = 0; c < n; c++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == c)
					_putchar('\\');
				else if (j < c)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
