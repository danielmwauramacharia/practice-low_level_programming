#include "main.h"

/**
  *print_square -print square using #
  *@size: The size of the square
  */
void print_square(int size)
{
	int i = 0, j = 0;

	if (!(size == 0 || size < 0))
{
		do {
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
			j++;
} while (j < size);
}
	else
		_putchar('\n');
}
