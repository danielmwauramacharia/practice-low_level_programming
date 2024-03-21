#include <stdio.h>
int sum(int);
/**
  *sum - A function that adds all the natural numbers up to n
  *@n: The upper limit number
  *Return: s the sum of all numbers upto n (included)
  */
int sum(int x)
{
	int s = 0;

	if (x == 1)
		return (x);
	s = x + sum(x - 1);
	return (s);
}
/**
  *main -Entry point to our program
  */
void main(void)
{
	int a;

	a = sum(5);
	printf("%d\n", a);
}
