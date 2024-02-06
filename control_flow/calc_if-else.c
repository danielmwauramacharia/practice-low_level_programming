#include <stdio.h>
#include <stdlib.h>

/**
  *main -Entry point of our program
  *
  *Return: 0 success
  */
int main(void)
{
	int a, b, sum, sub, mul, div;
	char op;

	printf("Please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("----------------------------\n");
	printf("Please enter an arithmetic operator:\n");
	scanf(" %c", &op);
	printf("------------------------------\n");
	if (op == '+' || op == '-' || op == '*' || op == '/')
{
		if (op == '+')
{
			sum = a + b;
			printf("The sum of the numbers is: %d\n", sum);
}
		else if (op == '-')
{
			sub = abs(a - b);
			printf("The diffrence between numbers is: %d\n", sub);
}
		else if (op == '*')
{
			mul = a * b;
			printf("The multiplication of the numbers is: %d\n", mul);
}
		else
{
			div = a / b;
			printf("The division of the numbers is: %d\n", div);
}
}
	else
{
		printf("Enter a valid arithmetic operator\n");
}
	return (0);
}
