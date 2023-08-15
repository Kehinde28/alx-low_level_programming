#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter
 * @c: The character to be checked
 *
 * Return: 1 if c is an alphabetic letter, 0 otherwise
 */
int _isalpha(int c)
{
	char lowercase_range_start = 'a';
	char lowercase_range_end = 'z';
	char uppercase_range_start = 'A';
	char uppercase_range_end = 'Z';

	if ((c >= lowercase_range_start && c <= lowercase_range_end) ||
	    (c >= uppercase_range_start && c <= uppercase_range_end))
		return (1);
	else
		return (0);
}
