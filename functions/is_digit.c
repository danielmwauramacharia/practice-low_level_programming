#include "main.h"

/**
  *_isdigit - checks if a digit between 0 and 9
  *@c: the argument to be checked
  *
  *Return: 1 if digit is between 0 and 9 or 0 otherwise
  */
int _isdigit(int c)
{
	int a = '0', b = '9';

	if (c >= a && c <= b)
		return (1);
	else
		return (0);
}
