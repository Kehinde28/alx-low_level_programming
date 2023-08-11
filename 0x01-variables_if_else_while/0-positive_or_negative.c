#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether the number is negative or positive
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ",n);

	if (n > 0)
		printf("is positive\n", n);
	else if (n < 0)
		printf("is negative\n", n);
	else 
		printf("is zero\n", n);

	return (0);
}
