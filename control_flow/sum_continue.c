#include <stdio.h>

/**
  *main -Entry of our program
  *
  *Return: 0 success
  */
int main(void)
{
	int i = 0, j, sum = 0;

	printf("The program calculates sum of ten entered numbers\n");
	printf("-------------------------------------------------\n");
	while (i < 10)
{
		printf("Enter a number:\n");
		scanf("%d", &j);
		if (j < 0)
			continue;
		sum = sum + j;
		i++;
}
	printf("---------------------------------\n");
	printf("The sum of entered numbers is: %d\n", sum);
	return (0);
}
