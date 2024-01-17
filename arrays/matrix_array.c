#include <stdio.h>

/**
  *main -Takes input for a 2D array and print the sum of elements
  *
  *Return: 0 success
  */
int main(void)
{
	int a[2][3], i, j, sum = 0;

	printf("Enter the matrix elements: ");
	for (i = 0; i < 2; i++)
{
		for (j = 0; j < 3; j++)
{
			scanf("%d", &a[i][j]);
}
}
	printf("The array matrix is : \n");
	for (i = 0; i < 2; i++)
{
		for (j = 0; j < 3; j++)
{
		printf("%d ", a[i][j]);
		sum = sum + a[i][j];
}
	printf("\n");
}
	printf("The sum of elements is: %d\n", sum);
	return (0);
}
