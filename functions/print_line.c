#include "main.h"

/**
  *print_line - prints a line using _ symbol
  */
void print_line(int n)
{
	int i;

	if (!(n == 0 || n < 0))
{
		for (i = 1; i <= n; i++)
			_putchar('_');
}
	_putchar('\n');
}
