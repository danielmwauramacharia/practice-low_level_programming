#include <stdio.h>

/**
  *main -calculates the length of a string
  *
  *Return: 0 success
  */
int main(void)
{
	char name[30];
	int count = 0, i = 0;

	printf("Enter a name: \n");
	scanf("%s", name);
	printf("The name entered is: ");
	puts(name);
	while (name[i] != '\0')
{
		count++;
		i++;
}
	printf("and the name length is : %d\n", count);
	return (0);
}
