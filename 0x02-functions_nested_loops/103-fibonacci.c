#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long long int fib1 = 1, fib2 = 2, nextFib, sum = 0;

    while (fib2 <= 4000000)
    {
        if (fib2 % 2 == 0)
        {
            sum += fib2;
        }
        
        nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("%llu\n", sum);

    return (0);
}
