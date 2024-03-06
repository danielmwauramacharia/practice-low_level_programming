#include "main.h"

/**
  *print_rev -prints a string in reverse
  *@s: The string to be reversed
  *
  */
void print_rev(char *s)
{
	int count = -1, len, i = 0;

	while (s[i] != '\0')
{
		count++;
		i++;
}
	len = count;
	while (len >= 0)
{
		_putchar(s[len]);
		len--;
}
	_putchar('\n');
}
