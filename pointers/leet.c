#include "main.h"

/**
  *leet - Function that encode a string into 1337
  *@s: The string to be encoded
  *Return: A pointer to the string
  */
char *leet(char *s)
{
	int i = 0, k = 0, j;
	char *ptr = s;
	char a[] = "aeotl";
	char b[] = "43071";

	while (i < 5)
{
		j = 0;
		while (ptr[j] != '\0')
{
			if ((ptr[j] == a[k]) || (ptr[j] == a[k] - 32))
				ptr[j] = b[k];
			j++;
}
		k++;
		i++;
}
	return (s);
}
