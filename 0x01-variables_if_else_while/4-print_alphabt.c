#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * Return: 0
*/

int main(void)
{
    char ab = 'a';

    while (ab <= 'z')
    {
        if (ab != 'q' && ab != 'e')
        {
            putchar(ab);
        }
        ab++;
    }

    putchar('\n');

    return (0);
}
