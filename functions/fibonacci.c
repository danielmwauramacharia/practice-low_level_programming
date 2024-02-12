#include <stdio.h>

/**
  *main - prints the first 50 Fibonacci numbers, starting with 1 and 2
  *
  *Return: 0  success
  */
int main(void)
{
	int i;
	long int next, first = 1, second = 2;

	printf("%ld, %ld, ", first, second);
	for (i = 0; i < 48; i++)
{
		next = first + second;
		first = second;
		second = next;
		if (i <= 46)
{
			printf("%ld, ", next);
}
		else
{
			printf("%ld", next);
}
}
		printf("\n");
		return (0);
}
