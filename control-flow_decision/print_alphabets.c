#include <stdio.h>

/**
  *main -A program that prints alphabets in lower case
  *
  *Return: 0 success
  */
int main(void)
{
	char first = 'a';
	char last = 'z';

	while (first <= last)
{
		putchar(first);
		first++;
}
	putchar('\n');
	return (0);
}
