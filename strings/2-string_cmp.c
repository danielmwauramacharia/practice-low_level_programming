#include <stdio.h>

/**
  *main -Compare two strings by a logic
  *
  *Return: 0 success
  */
int main(void)
{
	int value = 0, i;
	char fname[30], lname[30];

	printf("please enter the first name: \n");
	scanf("%s", fname);
	printf("please enter the second name: \n");
	scanf("%s", lname);
	for (i = 0; fname[i] != '\0' || lname[i] != '\0'; i++)
{
		if (fname[i] != lname[i])
{
			value = 1;
			break;
}
}
	if (value == 0)
{
		printf("same");
}
	else
{
		printf("not same");
}
	printf("\n");
	return (0);
}
