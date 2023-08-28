#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *f = needle;

		while (*c == *f && *f != '\0')
		{
			c++;
			f++;
		}

		if (*f == '\0')
			return (haystack);
	}

	return (0);
}
