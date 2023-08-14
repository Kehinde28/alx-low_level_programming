#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
    int num;

    for (num = 12; num < 790; num++)
    {
        if ((num / 100) < ((num / 10) % 10) && ((num / 10) % 10) < (num % 10))
        {
            putchar((num / 100) + '0');
            putchar(((num / 10) % 10) + '0');
            putchar((num % 10) + '0');

            if (num < 789)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}
