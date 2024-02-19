#include "main.h"

/**
  *print_triangle_row -prints a row of a triangle
  *@spaces: spaces before the triagle
  *@hashes: number of # characters in the triangle
  */

void print_triangle_row(int spaces, int hashes)
{
	int i, j;

	for (i = 0; i < spaces; i++)
		_putchar(' ');

	for (j = 0; j < hashes; j++)
		_putchar('#');

	_putchar('\n');
}

/**
  *print_triangle - prints triangle of given size using #
  *@size: The size of the triangle
  */

void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size <= 0)
{
		_putchar('\n');
		return;
}

	for (row = 0; row < size; row++)
{
		spaces = size - row - 1;
		hashes = row + 1;
		print_triangle_row(spaces, hashes);
}
}
