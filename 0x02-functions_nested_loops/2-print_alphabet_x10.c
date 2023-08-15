#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char d;
	int i;

	for (i = 0; i < 10; i++)
	{
		d = 'a';
		while (d <= 'z')
		{
			_putchar(d);
			d++;
		}
		_putchar('\n');
	}
}
