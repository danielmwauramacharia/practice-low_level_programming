#include <stdio.h>

/**
  *main -Program that prints alphabets in reverse
  *
  *Return: 0 success
  */
int main(void)
{
	char last = 'z';

	while (last >= 'a')
{
		putchar(last);
		last--;
}
	putchar('\n');
	return (0);
}
