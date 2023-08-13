#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print irints whether a randomly grnerated
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("if %d is positive\n");
	else if (n = 0)
		printf("if %d is zero\n");
	else
		printf("if %d is negative\n");
	return (0);
}
