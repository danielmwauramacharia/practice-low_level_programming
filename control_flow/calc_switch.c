#include <stdio.h>
#include <stdlib.h>
/**
  *main -Entry point of our program
  *
  *Return: 0 success
  */
int main(void)
{
	int a, b, sum, mul, sub, div;
	char operator;

	printf("Please Enter an operator:\n");
	scanf("%c", &operator);
	printf("--------------------------\n");
	printf("Please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("---------------------------\n");
	switch (operator)
{
		case '+':
			sum = a + b;
			printf("The sum of the numbers is: %d\n", sum);
			break;
		case '-':
			sub = abs(a - b);
			printf("The difference of the numbers is: %d\n", sub);
			break;
		case '*':
			mul = a * b;
			printf("The multiplication of the numbers is: %d\n", mul);
			break;
		case '/':
			if (a > b)
				div = a / b;
			else
				div = b / a;
			printf("The division of the numbers is: %d\n", div);
			break;
		default:
			printf("Please enter a valid arithmetic operator\n");
}
	return (0);
}
