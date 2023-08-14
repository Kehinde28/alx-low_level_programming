#include <stdio.h>

/**
 * main - prints all the numbers of base
 * Return: 0
 */
int main(void)
{
	int n;
	char ab;

	for (n = 22; n < 42; n++)
	{
		putchar(n);
	}
	for (ab = 'a'; ab <= 'f'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
	return (0);
}
