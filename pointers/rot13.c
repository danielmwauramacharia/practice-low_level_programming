#include "main.h"

/**
  *rot13 - Function that encodes a string using rot13
  *@s: The string to be encoded
  *Return: A pointer to the string
  */
char *rot13(char *s)
{
	int k = 0, j;
	char *ptr = s;
	char a[] = "ABCDEFGHIJKLM";
	char b[] = "NOPQRSTUVWXYZ";

	while (a[k] != '\0')
{
		j = 0;
		while (ptr[j] != '\0')
{
			if (ptr[j] == a[k])
				ptr[j] = b[k];
			else if (ptr[j] == b[k])
				ptr[j] = a[k];
			else if (ptr[j] == a[k] + 32)
				ptr[j] = b[k] + 32;
			else if (ptr[j] == b[k] + 32)
				ptr[j] = a[k] + 32;
			j++;
}
		k++;
}
	return (s);
}
