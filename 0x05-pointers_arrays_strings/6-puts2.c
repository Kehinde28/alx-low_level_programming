#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int length = 0;
	int a = 0;
	char *b = str;
	int o;

	while (*b != '\0')
	{
		b++;
		length++;
	}
	a = length - 1;
	for (o = 0 ; o <= a ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
