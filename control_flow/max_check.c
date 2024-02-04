#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *Return: 0 success
  */

int main(void)
{
	int a, b, c;

	printf("Please Enter three numbers :");
	scanf("%d %d %d", &a, &b, &c);
	printf("-------------------------------\n");
	if (a > b)
{
		if (a > c)
			printf("%d is the largest\n", a);
}
	if (b > a)
{
		if (b > c)
			printf("%d is the largest\n", b);
}
	else
		printf("%d is the largest\n", c);
	return (0);
}
