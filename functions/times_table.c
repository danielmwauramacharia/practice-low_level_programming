#include "main.h"

/**
  *print_times_table -prints a times table of given number
  *@n: The given number
  *
  */
void print_times_table(int n)
{
	int i, j, mult = 0;

	if (!(n <  0 || n > 15))
{
		for (i = 0; i <= n; i++)
{
			for (j = 0; j <= n; j++)
{
				if (n < 0 || n > 15)
					break;
				mult = i * j;
				if (j == 0)
{
					_putchar(mult + '0');
					_putchar(',');
}
				else if (mult < 10)
{
					if (j != n)
{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(mult + '0');
						_putchar(',');
}
					else 
{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(mult + '0');
}
}
				else if (mult >= 10 && mult < 100)
{
					if (j != n)
{
						_putchar(' ');
						_putchar(' ');
						_putchar(mult / 10 + '0');
						_putchar(mult % 10 + '0');
						_putchar(',');
}
					else
{
						_putchar(' ');
						_putchar(' ');
						_putchar(mult / 10 + '0');
						_putchar(mult % 10 + '0');
}
}
				else
{
					if (j != n)
{
						_putchar(' ');
						_putchar(mult / 100 + '0');
						_putchar((mult % 100) / 10 + '0');
						_putchar(mult % 10 + '0');
						_putchar(',');
}
					else 
{
						_putchar(' ');
						_putchar(mult / 100 + '0');
						_putchar((mult % 100) / 10 + '0');
						_putchar(mult % 10 + '0');
}
}
}
				_putchar('\n');
}
}
}
