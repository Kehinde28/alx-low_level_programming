#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}

	for (ab = 'A'; ab <= 'Z'; ab++)
	{
		putchar(ab);
	}

	putchar('\n');
	return (0);
}
