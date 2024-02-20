#include "main.h"
#include <stdio.h>

/**
  *main -Gets and Read the array elements from user
  *
  *Description: Then checks the array elements that are prime numbers
  *Return: 0 success
  */

int main(void)
{
	int a[10], prime[10], i = 0, j = 0, count = -1;

	printf("Enter 10 integers:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("----------------------\n");

	printf("The array elements entered are\n");
	for (i = 0; i < 10; i++)
{
		printf("%d", a[i]);
		if (i < 9)
			printf(", ");
}
	printf("\n");

	prime[0] = -1;
	for (i = 0; i < 10; i++)
{
		if (!(isPrime(a[i])))
{
			continue;
}
		prime[j] = a[i];
		j++;
		count++;
}

	if (!(prime[0] == -1))
{
		printf("The prime number in the array: ");
		for (i = 0; i <= count; i++)
{
			printf("%d", prime[i]);
			if (i < count)
				printf(", ");
}
}
	else
		printf("No prime number in the integers entered");
	printf("\n");
	return (0);
}
