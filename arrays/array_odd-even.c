#include <stdio.h>

/**
  *main -reads array inputs then checks if odd or even
  *
  *Return: 0 success
  */
int main(void)
{
	int i = 0;
	int num[10];
	int check;
	int count_odd = 0;
	int count_even = 0;

	while (i < 10)
{
		printf("Please enter an non negative number ");
		scanf("%d", &check);
		if (check != 0 && check > 0)
{
			num[i] = check;
			i++;
}
		else
{
			printf("Invalid number\n");
}
}
	printf("------------------------------------------------\n");
	for (i = 0; i < 10; i++)
{
		printf("%d   has been stored in index %d of the array\n", num[i], i);
}
	printf("--------------------------------------------------\n");
	for (i = 0; i < 10; i++)
{
		if (num[i] % 2 == 0)
{
			printf("%d   is even\n", num[i]);
			count_even++;
}
		else
{
			printf("%d   is odd\n", num[i]);
			count_odd++;
}
}
	printf("There were %d even numbers and %d odd numbers\n", count_even, count_odd);
	return (0);
}

	
