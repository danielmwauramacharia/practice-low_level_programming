#include "main.h"

/**
  *rev_string -function that reverses a string
  *@s: The string to be reversed
  *
  */
void rev_string(char *s)
{
	int i = 0, j = 0, count = -1, len;
	char temp;

	while (s[i] != '\0')
{
		count++;
		i++;
}
	len = count;
	while (j <= len)
{
		temp = s[j];
		s[j] = s[len];
		s[len] = temp;
		j++;
		len--;
}
}
