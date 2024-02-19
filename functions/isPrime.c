#include "main.h"
#define true 1
#define false 0

/**
  *isPrime -Function that checks if a number is prime or not
  *@num: The number to be checked
  *
  *Return: 1 if it's prime or 0 otherwise
  */
int isPrime(int num)
{
	int i;

	if (num <= 1)
		return (0);

	if (num <= 3)
		return (1);

	if (num % 2 == 0 || num % 3 == 0)
		return (0);

	for (i = 5; i * i <= num; i += 6)
{
		if (num % i == 0 || num % (i + 2) == 0)
			return (0);
}
	return (1);
}
