#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of a randomly number
 * Return: 0
 */
int main(void)
{		
	int n;
	int last_digits;

	srand(time(0));
	n = rand() -RAND_MAX / 2;

	last_digit = n % 10;

	printf("last digit of %d is %d", n, last_digit);

	if (last_digit > 5)
		printf(" and is greater than 5\n");
	else if (last_digit == 0)
		print(" and is 0\n');
	else 
		prinitf(" and is less thab 6 and not 0\n");
	return (0);
}
