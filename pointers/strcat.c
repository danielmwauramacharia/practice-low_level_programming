#include "main.h"

/**
  **_strcat - function that concatenates two strings
  *@dest: destination string
  *@src: source string
  *
  *Return: pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	int length = 0, i = 0;

	while (dest[length] != '\0')
{
		length++;
}
	while (src[i] != '\0')
{
		dest[length] = src[i];
		length++;
		i++;
}
	dest[length + 1] = '\0';
	return (dest);
}
