#include "main.h"

/**
  *_strncat - function that concatenates two strings using n bytes
  *@dest: The destination string
  *@src: The source string
  *@n: The number of bytes from src string
  *
  *Return: string pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[length] != '\0')
{
		length++;
}
	while (src[i] != '\0' && i < n)
{
		dest[length] = src[i];
		length++;
		i++;
}
	dest[length] = '\0';
	return (dest);
}

