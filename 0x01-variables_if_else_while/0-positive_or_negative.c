#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Prints whether a randomly generated number
 * Return: 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("%d", n);

    if (n > 0)
        printf("is %d positive\n");
    else if (n == 0)
        printf("is %d zero\n" );
    else
        printf("is %d negative\n" );
    return (0);
}
