#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char ko;

	for (ko = 'a'; ko <= 'z'; ko++)
	{
		putchar(ko);
	}
	putchar('\n');
	return (0);
}

