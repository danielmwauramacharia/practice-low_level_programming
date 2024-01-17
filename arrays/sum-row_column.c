#include <stdio.h>

/**
  *main -sum row and colums of an array
  *
  *Return: 0 success
  */
int main(void)
{
	int a[3][3], i, j, q = 0, sumR, sumC;

	printf("Please Enter array elements: ");
	for (i = 0; i < 3; i++)
{
		for (j = 0; j < 3; j++)
{
			scanf("%d", &a[i][j]);
}
}
	printf("-------------------------------\n");
	printf("The matrix entered is: \n");
	for (i = 0; i < 3; i++)
{
		for (j = 0; j < 3; j++)
{
			printf("%d ", a[i][j]);
}
		printf("\n");
}
	printf("-------------------------------\n");
	for (i = 0; i < 3; i++)
{
		sumR = 0;
		sumC = 0;
		for (j = 0; j < 3; j++)
{
			sumR = sumR + a[i][j];
			sumC = sumC + a[j][i];
}
		printf("The sum of Row %d is : %d and ", q, sumR);
		printf("the  sum of column %d is : %d\n", q, sumC);
		q++;
}
	printf("\n");
	return (0);
}
