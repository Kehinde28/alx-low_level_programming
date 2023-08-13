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
	printf("%d", n);
	if ("n > 0");
		printf("if %f is positive\n");
	else if ("n = 0");
		printf("if %f is zero\n");
	else
		printf("if %f is negative\n");
	return (0);
}
