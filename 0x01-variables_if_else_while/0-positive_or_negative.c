#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether the number is negative or positive
 *
 * Return: Always 0 (Success)
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n");
	else if (n == 0)
		printf("%d isnrgative\n");
	else 
		printf("%d is zero\n");
	return (0);
}
