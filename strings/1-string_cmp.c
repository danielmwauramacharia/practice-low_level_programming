#include <stdio.h>
#include <string.h>

/**
  *main -Compare two strings
  *
  *Return: 0 success
  */
int main(void)
{
	int value;
	char fname[30], lname[30];

	printf("please enter the first name: \n");
	scanf("%s", fname);
	printf("please enter the second name: \n");
	scanf("%s", lname);
	value = strcmp(fname, lname);
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
