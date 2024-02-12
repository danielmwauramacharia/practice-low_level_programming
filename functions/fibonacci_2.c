#include <stdio.h>

/**
  *main - add the fibonacci even numbers
  *
  *Return: 0 for success
  */
int main(void)
{
	int i;
	long int first = 1, second = 2, sum = 0, next = 0, last = 4000000;

	for (i  = 0; next <= last; i++)
{
		next = first + second;
		first = second;
		second = next;
		if (next % 2 == 0)
{
			sum = sum + next;
}
		
}
		printf("%ld\n", sum);
		return (0);
}
