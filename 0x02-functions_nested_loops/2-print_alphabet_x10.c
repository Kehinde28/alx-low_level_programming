#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10
 */

void print_alphabet_x10(void)
{
    int i;
    char d;

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
