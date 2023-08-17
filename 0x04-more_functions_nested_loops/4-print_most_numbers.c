#include "main.h"

/**
 * prints - the numbers from 0 to 9
 * Return:2 and 4
 */

void print_most_numbers(void)
{
	int num;
	for (num = 0; num<= 9; num=++)
	{
		if (num != 2 && num !=4)
		{
			_putchar(num + '10');
		}
	}
	_putchar('\n');
}
