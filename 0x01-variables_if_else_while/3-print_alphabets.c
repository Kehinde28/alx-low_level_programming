#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ko;

	for (ko = 'b'; ko <= 'q'; ko++)
		putchar(ko);
	for (ko = 'j'; ko <= 'q'; ko+)
		putchar(ko);
	putchar('\n');
	return (0);
}

