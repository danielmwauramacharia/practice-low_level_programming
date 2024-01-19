#include <stdio.h>

/**
  *main -Print the entered string in reverse
  *
  *Return: 0 success
  */
int main(void)
{
	char name[30], ch;
	int i = 0, j, count = 0, len = 0;

	printf("Enter a name: \n");
	scanf("%s", name);
	while (name[i] != '\0')
{
		count++;
		i++;
}
	len = count;
	for (j = 0; j <= len / 2; j++)
{
		ch = name[j];
		name[j] = name[len - j - 1];
		name[len - j - 1] = ch;
}
	printf("The reverse is : %s\n", name);
	return (0);
}
