#include <stdio.h>

void swap_int(int *a, int *b);

/**
  *swap_int -function that swaps two numbers
  *@a: the first number
  *@b: the second number
  *
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
  *main -The main function of our program
  *
  *Return: 0 success
  */

int main(void)
{
	int a;
	int b;

	a = 42;
	b = 98;
	printf("a = %d b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d b = %d\n", a, b);
	return (0);
}
