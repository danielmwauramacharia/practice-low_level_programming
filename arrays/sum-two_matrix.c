#include <stdio.h>

/**
  *main -calculates sum of two matrices
  *
  *Return: 0 success
  */
int main(void)
{
	int a[2][3], b[2][3], c[2][3], i, j;

	printf("Enter the values of the first matrix: \n");
	for (i = 0; i < 2; i++)
{
		for (j = 0; j < 3; j++)
{
			scanf("%d", &a[i][j]);
}
}
	printf("Enter Values of the second matrix: \n");
	for (i = 0; i < 2; i++)
{
		for (j = 0; j < 3; j++)
{
			scanf("%d", &b[i][j]);
}
}
	printf("---------------------------------------\n");
	printf("Sum of the entered matrices result to: \n");
	for (i = 0; i < 2; i++)
{
		for (j = 0; j < 3; j++)
{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ", c[i][j]);
}
		printf("\n");
}
	return (0);
}
