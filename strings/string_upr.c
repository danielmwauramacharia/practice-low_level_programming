#include <stdio.h>

/**
  *main -converts a string to uppercase
  *
  *Return: 0 success
  */
int main(void)
{
	char name[30];
	int i;

	printf("Please enter a name: \n");
	scanf("%s", name);
	for (i = 0; name[i] != '\0'; i++)
{
		if (name[i] >= 'a' && name[i] <= 'z')
{
			name[i] = name[i] - 32;
}
}
	printf("In uppercase is: %s\n", name);
	return (0);
}
