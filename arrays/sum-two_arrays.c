#include <stdio.h>

/**
  *main -gets two array elements and sums them
  *
  *Return: 0 success
  */
int main(void)
{
	int i = 0;
	int a[5];
	int b[5];
	int sumArray[5];

	for (i = 0; i < 5; i++)
{
		printf("Enter 5 elements of the first array: ");
		scanf("%d", &a[i]);
}
	printf("The first arrray elements are: ");
	for (i = 0; i < 5; i++)
{
		if (i < 4)
{
			printf("%d, ", a[i]);
}
		else
{
			printf("%d", a[i]);
}
}
	printf("\n");
	printf("-------------------------------------------------------\n");
	printf(" ");
	for (i = 0; i < 5; i++)
{
		printf("Enter 5 elements of the second array: ");
		scanf("%d", &b[i]);
}
	printf("The second array elements are: ");
	for (i = 0; i < 5; i++)
{
		if (i < 4)
{
			printf("%d, ", b[i]);
}
		else
{
			printf("%d", b[i]);
}
}
	printf("\n");
	printf("---------------------------------------------------------\n");
	printf(" ");
	for (i = 0; i < 5; i++)
{
		sumArray[i] = a[i] + b[i];
}
	printf("The sum of elements is ");
	for (i = 0; i < 5; i++)
{	
		if (i < 4)
{
			printf("%d, ", sumArray[i]);
}
		else
{
			printf("%d", sumArray[i]);
}
}
	printf("\n");
	return (0);
}
