#include "main.h"

/**
  *print_triangle -prints trinagle of a given size using #
  *@size: The size of triangle
  */
void print_triangle(int size)
{
	int n = 0, i, j, x = size - 1;

	if (size <= 0)
{
		_putchar('\n');
		return;
}
	while (size > n)
{
		i = 0;
		j = 0;
		for (i = 0; i < x; i++)
			_putchar(' ');
		for (j = 0; j <= n; j++)
			_putchar('#');
		n++;
		x--;
		_putchar('\n');
}
}
