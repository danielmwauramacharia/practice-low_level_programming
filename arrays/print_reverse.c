#include <stdio.h>

/**
  *main -read and print array elements in reverse
  *
  *Return: 0 success
  */

int main(void)
{
	int a[5], i;

	printf("Please enter 5 numbers ");

	for (i = 0; i < 5; i++)
{
		scanf("%d", &a[i]);
}
	printf("The array elements in reverse are: ");
	for (i = 4; i >= 0; i--)
{
		if (i > 0)
{
			printf("%d, ", a[i]);
}
		else
{
			printf("%d", a[i]);
}
}
	printf("\n");
	return (0);
}
