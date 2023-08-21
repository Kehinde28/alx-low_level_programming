#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int meter = 0;
	int i;

	while (s[meter] != '\0')
	counter++;
	for (i = 0; i < meter; i++)
	{
		meter--;
		rev = s[i];
		s[i] = s[meter];
		s[meter] = rev;
	}
}
