#include <stdio.h>

/**
  *main -Prints alphabets but skips some
  *
  *Return: 0 success
  */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
{
		if (lower == 'q' || lower == 'e')
{
			lower++;
			continue;
}
		putchar(lower);
		lower++;
}
	putchar('\n');
	return (0);
}
