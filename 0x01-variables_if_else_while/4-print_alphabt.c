#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ab = 'a';

	while (ab <= 'z')
	{
		if (ab != 'q' && ab != 'e')
		{
			putchar(ab);
		}
		ab++;
	}

	putchar('\n');

	return (0);
}}
