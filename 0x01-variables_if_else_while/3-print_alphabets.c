#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++);
		putchar(ab);
	for (ab = 'A'; ab <= 'Z'; ab++);
		putchar(ab);
	putchar('\n');
	return (0);
}
