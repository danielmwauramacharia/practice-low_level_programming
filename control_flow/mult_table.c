#include <stdio.h>

/**
  *main -Entry to the program
  *
  *Return: 0 success
  */
int main(void)
{
	int num, i, j, mult;

	printf("Please enter number for the multiplication table:\n");
	scanf("%d", &num);
	printf("--------------------------------------------------\n");
	printf("Please enter the size:\n");
	scanf(" %d", &j);
	printf("---------------------------------------------------\n");
	printf("The multiplication table is:\n");
	for (i = 0; i <= j; i++)
{
		mult = num * i;
		printf("%d x %d = %d\n", num, i, mult);
}
	return (0);
}
