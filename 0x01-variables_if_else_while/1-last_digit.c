
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of a randomly generated number
 * Return: 0
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is %d and is ", n, n % 15);
    if (n % 15 > 5)
        printf("greater than 5\n");
    else if (n % 15 == 0
        printf("0\n");
    else
        printf("less than 0 and not 0\n");
    return (0);
}
