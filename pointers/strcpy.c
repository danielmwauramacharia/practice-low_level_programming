#include "main.h"

/**
  **_strcpy - copies a string pointed to by src to buffer dest
  *@src: the source string
  *@dest: the destination buffer
  *
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0, count = 0, j = 0;

	while (src[i] != '\0')
{
		count++;
		i++;
}
	while (j <= count)
{
		dest[j] = src[j];
		j++;
}
	return (dest);
}
