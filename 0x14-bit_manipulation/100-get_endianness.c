#include "main.h"

/**
 * get_endianness - get if endian is little or big
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
