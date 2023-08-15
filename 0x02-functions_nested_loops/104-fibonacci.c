#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, nextFib;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		nextFib = fib1 + fib2;
		printf(", %lu", nextFib);

		// Detecting overflow by checking if nextFib is less than fib2
		if (nextFib < fib2)
			break;

		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("\n");

	return (0);
}