#include <stdio.h>
void sum(void);
/**
  *sum -A function that calculates sum of 2 integers and return results
  *
  *Return: returns the sum
  */
void sum(void)
{
	int a, b, sum = 0;

	printf("Please Enter two integers:\n");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum of the integers is: %d\n", sum);
}
/**
  *main -Entry to the main function
  *
  *Return: 0 success
  */
int main(void)
{
	sum();
	return (0);
}
