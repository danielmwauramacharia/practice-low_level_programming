#include "main.h"

/**
  *print_triangle_row -prints the rows of a triangle
  *@spaces: spaces before the triagle
  *@hashes: number of # in the triagle
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
  *print_triangle - prints triangle of given size
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
