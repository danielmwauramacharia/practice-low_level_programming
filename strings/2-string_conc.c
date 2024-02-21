#include <stdio.h>

/**
  *main -a program that concatenated two strings
  *
  *Return: 0 success
  */
int main(void)
{
	char fname[30];
	char lname[10];
	int i = 0, j = 0, count1 = 0, count2 = 0, len1, len2, k=0;

	printf("Enter your first name: \n");
	scanf("%s", fname);
	printf("Enter your second name: \n");
	scanf("%s", lname);
	while (fname[i] != '\0')
{
		count1++;
		i++;
}
	len1 = count1;
	while (lname[k] != '\0')
{
		count2++;
		k++;
}
	len2 = count2;
	for (j = 0; j <= len2; j++)
{
		fname[len1 + j] = lname[j];
}
	printf("Your names are: %s\n", fname);
	return (0);
}
