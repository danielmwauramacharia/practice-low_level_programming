#include <stdio.h>
#include <string.h>

/**
  *main -calculates the length of a string
  *
  *Return: 0 success
  */
int main(void)
{
	char name[30];
	int count = 0;

	printf("Enter name: \n");
	scanf("%s", name);
	printf("The name entered is: ");
	puts(name);
	count = strlen(name);
	printf("The string length is: %d \n", count);
	return (0);
}
