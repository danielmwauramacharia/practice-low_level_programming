#include "main.h"
#include <stdio.h>
#define true 1
#define false 2

/**
  *main -A program that finds the largest prime factor of 612852475143
  *
  *Return: 0 success
  */

int main(void)
{
	long n = 612852475143;
	int i, largest = -1;

	while (n % 2 == 0)
{
		largest = 2;
		n /= 2;
}

	for (i = 3; i * i <= n; i += 2)
{
		if (!(isPrime(i)))
			continue;
		while (n % i == 0)
{
			largest = i;
			n /= i;
}
}
	if (n > 2)
		largest = n;
	printf("%d\n", largest);
	return (0);
}
