#include "main.h"

int _strlen(char *s);

/**
  *_strlen -a function that calculates length of a string
  *@s: the string to be passes
  *
  *Return: return length
  */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
{
		len++;
}
	return (len);
}


#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
