#include <stdio.h>

/**
  *main -multiply two matrix of the the no of rows
  *
  *Return: 0 success
  */
int main(void)
{
	int a[3][3], b[3][2], c[3][2], i, j, k, sum;

	printf("Please enter the first matrix: \n");
	for (i = 0; i < 3; i++)
{
		for (j = 0; j < 3; j++)
{
			scanf("%d", &a[i][j]);
}
}
	printf("Please enter the second matrix: \n");
	for (i = 0; i < 3; i++)
{
		for (j = 0; j < 2; j++)
{
			scanf("%d", &b[i][j]);
}
}
	printf("The product of the matrix is: \n");
	for (i = 0; i < 3; i++)
{
		for (j = 0; j < 2; j++)
{
			sum = 0;
			for (k = 0; k < 3; k++)
{
				sum = sum + a[i][k] * b[k][j];
}
			c[i][j] = sum;
}
}
	for (i = 0; i < 3; i++)
{
		for (j = 0; j < 2; j++)
{
			printf("%d ", c[i][j]);
}
		printf("\n");
}
	return (0);
}
