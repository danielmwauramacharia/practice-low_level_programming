#include <stdio.h>
int func1(int);
int func2(int);
/**
  *func1 - An indirect recursive function in calculation of factorial
  *@n: The number to calculate the the factorial
  *
  *Return: a step in facorial calculation
  */
int func1(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * func2(n - 1));
}
/**
  *func2 - An indirect recursive function
  *@n: the number passed to the function
  *
  *Return: The calculation in the factorial steps
  */
int func2(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * func1(n - 1));
}
/**
  *main - Entery point of our program
  */
void main(void)
{
	printf("%d\n", func1(5));
}
