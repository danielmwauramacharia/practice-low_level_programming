#include "main.h"

/**
  *print_alphabet_x10 -function that prints alphabets in lower case 10 times
  */
void print_alphabet_x10(void)
{
	char first;
	char last;
	int i = 0;

	while (i < 10)
{
		first = 'a';
		last = 'z';
		while (first <= last)
{
			_putchar(first);
			first++;
}
		_putchar('\n');
		i++;
}
}
