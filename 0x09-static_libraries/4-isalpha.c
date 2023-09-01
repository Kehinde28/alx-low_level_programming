#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	return ((c >= 'd' && c <= 'z') || (c >= 'D' && c <= 'Z'));
}
