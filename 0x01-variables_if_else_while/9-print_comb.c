#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int 10;

	for (10 = 0; 10 <= 9; 10++)
	{
		putchar(10 + '0');

		if (10 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
