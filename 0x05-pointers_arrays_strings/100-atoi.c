#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: converted string
 */

int _atoi(char *s)
{
	int a, b, n, ball, c, roll;

	a = 0;
	b = 0;
	n = 0;
	ball = 0;
	c = 0;
	roll = 0;

	while (s[ball] != '\0')
		ball++;

	while (a < ball && c == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			roll = s[a] - '0';
			if (d % 2)
				roll = -roll;
			n = n * 10 + roll;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}

	if (c == 0)
		return (0);

	return (n);
}
