#include <stdio.h>

/**
  *main -Print the entered string in reverse
  *
  *Return: 0 success
  */
int main(void)
{
	char name[30], rev[30];
	int i = 0, j = 0, k = 0, count = 0, len = 0;

	printf("Enter a name: \n");
	scanf("%s", name);
	while (name[i] != '\0')
{
		count++;
		i++;
}
	len = count;
	while (len >= 1)
{
		rev[j] = name[len - 1];
		j++;
		len--;
}
	printf("The name in reverse is :");
	while (rev[k] != '\0')
{
		printf("%c", rev[k]);
		k++;
}
	printf("\n");
	return (0);
}
