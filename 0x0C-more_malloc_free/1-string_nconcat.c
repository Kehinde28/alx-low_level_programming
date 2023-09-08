#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, j = 0, sen1 = 0, sen2 = 0;

	while (s1 && s1[sen1])
		sen1++;
	while (s2 && s2[sen2])
		sen2++;

	if (n < sen2)
		s = malloc(sizeof(char) * (sen1 + n + 1));
	else
		s = malloc(sizeof(char) * (sen1 + sen2 + 1));

	if (!s)
		return (NULL);

	while (a < sen1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < sen2 && a < (sen1 + n))
		s[a++] = s2[j++];

	while (n >= sen2 && a < (sen1 + sen2))
		s[a++] = s2[j++];

	s[a] = '\0';

	return (s);
}
