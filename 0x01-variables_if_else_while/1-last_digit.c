#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print this program with last digit
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

 	int last_digit = n % 10;	

 	printf("last digit of %d is %d, n, last_digits);

	if(last_digits > 5)
		printf("and is greater thank 5\n");
	else if (last_digits == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
