#include "main.h"

/**
  *_isupper -function that checks if a character is upper
  *@c: The character to be checked
  *
  *Return: 1 if upper 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
