#include <stdio.h>

/*
 *main -Enter matrix , transpose and store transpose in another array
 *
 *Return: 0 success
 */
int main(void)
{
	int a[2][3], i, j;
	int b[3][2];

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
	for (i = 0; i < 3; i++)
{
		for (j = 0; j < 2; j++)
{
			b[i][j] = a[j][i];
}
}
	printf("The matrix transpose is: \n");
	for (i = 0; i < 3; i++)
{
		for (j = 0; j < 2; j++)
{
			printf("%d ", b[i][j]);
}
		printf("\n");
}
	return (0);
}
