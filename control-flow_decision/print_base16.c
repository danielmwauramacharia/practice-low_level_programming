#include <stdio.h>

/**
  *main -prints all numbers of base 16 in lowercase
  *
  *Return: 0 success
  */
int main(void)
{
	char first = 'a';
	int i = 0;

	while (i < 10)
{
		putchar(i + '0');
		i++;
}
	while (first <= 'f')
{
		putchar(first);
		first++;
}
	putchar('\n');
	return (0);
}
