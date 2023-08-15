#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
    char lowercase_range_start = 'a';
    char lowercase_range_end = 'z';

    if (c >= lowercase_range_start && c <= lowercase_range_end)
        return (1);
    else
        return (0);
}
