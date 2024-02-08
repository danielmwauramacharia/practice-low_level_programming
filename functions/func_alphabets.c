#include "main.h"

/**
  *print_alphabet -prints alphabets in lowercase
  */
void print_alphabet(void)
{
	char first = 'a';
	char last = 'z';

	while (first <= last)
{
		_putchar(first);
		first++;
}
	_putchar('\n');
}
