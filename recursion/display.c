#include <stdio.h>
void display(int);
/**
  *display - A function that displays the factorial of a number
  *@n: The number
  *
  */
void display(int n)
{
	if (n < 1)
{
		return;
}
	else
{
		printf("%d", n);
		display(n - 1);
		printf("%d", n);
}
}
/**
  *main - Entry point to the program
  *
  */
void main(void)
{
	int n = 3;

	display(n);
	printf("\n");
}
