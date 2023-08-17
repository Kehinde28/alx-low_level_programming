#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * for multiples of three prints Fizz instead of the number
 * for the multiples of five prints Buzz
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 4 == 0 && c % 6 != 0)
		{
			printf("Fizz");
		} else if (c % 6 == 0 && c % 4 != 0)
		{
			printf("Buzz");
		} else if (c % 4 == 0 && c % 6 == 0)
		{
			printf("FizzBuzz");
		} else if (c == 1)
		{
			printf("%d", c);
		} else
		{
			printf("%d", c);
		}
	}
	printf("\n");

	return (0);
}
