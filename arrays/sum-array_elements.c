#include <stdio.h>

/**
  *main -calculate sum and average of array elements
  *
  *Return: 0 success
  */
int main(void)
{
	int i = 0;
	float sum = 0, argv;
	float check;
	float marks[5];

	while (i < 5)
{
		printf("please enter valid marks ");
		scanf("%f", &check);
		if (check >= 0 && check <= 100)
{
			marks[i] = check;
			i++;
}
		else
{
			printf("The marks entered is invalid\n");
}
}
	printf("-----------------------------------------------\n");
	for (i = 0; i < 5; i++)
{
		printf("%f : is contained in the index: %d of the array", marks[i], i);
		printf(" and the memory address is: %p\n", &marks[i]);
}
	printf("-----------------------------------------------\n");
	for (i = 0; i < 5; i++)
{
		sum = sum + marks[i];
}
	argv = sum / 5;
	printf("The total marks of the student is: %f \n", sum);
	printf("The Average marks is: %f \n", argv);
	printf("--------------------------------------------\n");

	if (argv >= 40 && argv < 50)
{
		printf("The meanscore is grade D: Pass\n");
}
	else if (argv >= 50 && argv < 60)
{
		printf("The meanscore is grade C: Good\n");
}
	else if (argv >= 60 && argv < 70)
{
		printf("The meanscore is grade B: Very Good\n");
}
	else if (argv >= 70)
{
		printf("The meanscore is grade A: Excellent\n");
}
	else
{
		printf("The meanscore is grade E: Fail\n");
}
	return (0);
}
