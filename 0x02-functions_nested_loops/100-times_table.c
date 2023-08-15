#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number of the times table to print
 */
void print_times_table(int n)
{
    int i, j;

    if (n >= 0 && n <= 15)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                int result = i * j;

                if (j != 0)
                {
                    if (result < 10)
                        printf("   ");
                    else if (result < 100)
                        printf("  ");
                    else
                        printf(" ");
                }

                printf("%d", result);

                if (j != n)
                    printf(", ");
                else
                    printf("\n");
            }
        }
    }
}
