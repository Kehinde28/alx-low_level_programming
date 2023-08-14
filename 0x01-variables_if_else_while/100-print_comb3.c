#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int tens, ones, count;

	count = 0;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			if (tens < ones)
			{
				if (count > 0)
				{
					putchar(',');
					putchar(' ');
				}

				putchar(tens + '0');
				putchar(ones + '0');

				count++;
			}
		}
	}

	putchar('\n');

	return (0);
}
