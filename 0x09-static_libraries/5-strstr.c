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
		char *b = haystack;
		char *c = needle;


		while (*b == *c && *c != '\0')
		{
			b++;
			c++;
		}


		if (*c == '\0')
			return (haystack);
	}


	return (0);
}
