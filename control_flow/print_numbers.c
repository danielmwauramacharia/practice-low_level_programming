#include <stdio.h>

/**
  *main -Entry to our program
  *
  *Return: 0 on success
  */
int main(void)
{
	int i, j;

	printf("Enter the starting number:\n");
	scanf("%d", &i);
	printf("----------------------------\n");
	printf("Enter the last number:\n");
	scanf(" %d", &j);
	printf("-----------------------------\n");
	if (j > i)
{
		while (i <= j)
{
			printf("%d, ", i);
			i++;
}
}
	else if (i == j)
{
		printf("The numbers are equal\n");
}
	else
{
		printf("The start digit is > that the last\n");
}
	printf("\n");
	return (0);
}
