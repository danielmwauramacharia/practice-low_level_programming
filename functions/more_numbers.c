#include "main.h"

/**
  *more_numbers -prints 0 through to 14 ten times
  */
void more_numbers(void)
{
	int i, j = 0;

	do {
		for (i = 0; i < 15; i++)
{
			if (!(i / 10 == 0))
{
				_putchar(i / 10 + '0');
}
			_putchar(i % 10 + '0');
}
	_putchar('\n');
	j++;
} while (j <= 9);
}
