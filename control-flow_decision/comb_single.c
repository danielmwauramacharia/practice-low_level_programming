#include <stdio.h>

/**
  *main -prints all possible combinations of single digits
  *
  *Return: 0 success
  */

int main(void)
{
	int i = 0;

	while (i < 10)
{
		putchar(i + '0');
		if (i < 9)
{
			putchar(',');
			putchar(' ');
}
		i++;
}
	putchar('\n');
	return (0);
}
