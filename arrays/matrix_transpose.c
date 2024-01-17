#include <stdio.h>

/*
 *main -Enter a matrix then transpose
 *
 *Return: 0 success
 */
int main(void)
{
	int a[2][3], i, j;

	printf("Enter the matrix elements: ");

	for (i = 0; i < 2; i++)
{
		for (j = 0; j < 3; j++)
{
			scanf("%d", &a[i][j]);
}
}
	printf("The matrix entered is: \n");
	for (i = 0; i < 2; i++)
{
		for (j = 0; j < 3; j++)
{
			printf("%d ", a[i][j]);
}
		printf("\n");
}
	printf("The matrix transpose is: \n");
	for (i = 0; i < 3; i++)
{
		for (j = 0; j < 2; j++)
{
			printf("%d ", a[j][i]);
}
		printf("\n");
}
	return (0);
}
