#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -program that checks the last digit of a random number
*
*Description: Then checks if its >5, !=0 and <6, or zero
*Return: 0 success
*/
int main(void)
{
	int n, c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	c = abs(n) % 10;
	if (c > 5)
		printf("%d and is greater than 5\n", c);
	else if (c != 0 && c < 6)
		printf("%d and is less than 6 and not 0\n", c);
	else
		printf("%d and is 0\n", c);
	return (0);
}
