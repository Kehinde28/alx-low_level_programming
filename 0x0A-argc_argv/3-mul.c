#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a, d, n, len, f, digit;

	a = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[sen] != '\0')
		sen++;

	while (a < sen && f == 0)
	{
		if (s[a] == '-')
			++d;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{`
	int result, sum1, sum2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	sum1 = _atoi(argv[1]);
	sum2 = _atoi(argv[2]);
	result = sum1 * sum2;

	printf("%d\n", result);

	return (0);
}

