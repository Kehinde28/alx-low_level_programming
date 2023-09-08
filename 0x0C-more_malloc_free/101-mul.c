#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int sen1, sen2, sen, a, carry, num1, num2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_num(s1) || !is_num(s2))
		errors();
	sen1 = _strlen(s1);
	sen2 = _strlen(s2);
	sen = sen1 + sen2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (a = 0; a <= sen1 + sen2; a++)
		result[a] = 0;
	for (sen1 = sen1 - 1; sen1 >= 0; sen1--)
	{
		num1 = s1[sen1] - '0';
		carry = 0;
		for (sen2 = _strlen(s2) - 1; sen2 >= 0; sen2--)
		{
			num2 = s2[sen2] - '0';
			carry += result[sen1 + sen2 + 1] + (num1 * num2);
			result[sen1 + sen2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[sen1 + sen2 + 1] += carry;
	}
	for (a = 0; a < sen - 1; a++)
	{
		if (result[a])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
