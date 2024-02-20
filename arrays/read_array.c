#include <stdio.h>

/**
  *main -Read and print array elements
  *
  *Return: 0 success
  */

int main(void)
{
	int a[5], i;

	printf("Please enter 5 numbers:\n");

	for (i = 0; i < 5; i++)
{
		scanf("%d", &a[i]);
}
	printf("---------------------------\n");
	printf("The array elements entered are:\n");
	for (i = 0; i < 5; i++)
{
		printf("%d", a[i]);
		if (i <= 3)
			printf(", ");
}

	printf("\n");
	return (0);
}
