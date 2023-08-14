#include <stdio.h>

/**
 * main - Write a program that prints all the numbers of base 16
 * Return: 0
 */

int main(void)
{
	char hexadecimal_digit;

	for (hexadecimal_digit = '0'; hexadecimal_digit <= '9'; hexadecimal_digit++)
	{
		putchar(hexadecimal_digit);
	}

	for (hexadecimal_digit = 'a'; hexadecimal_digit <= 'f'; hexadecimal_digit++)
	{
		putchar(hexadecimal_digit);
	}

	putchar('\n');

	return (0);
}
