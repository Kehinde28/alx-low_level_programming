#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 *
 * Return: void
 */
void rev_string(char *s)
{
		char rev;
		int meter = 0;
		int i;

		while (s[meter] != '\0')
		meter++;

		for (i = 0; i < meter / 2; i++)
		{
		rev = s[i];
		s[i] = s[meter - 1 - i];
		s[meter - 1 - i] = rev;
		}
}
