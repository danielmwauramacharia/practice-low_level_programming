#include "main.h"

/**
  *_islower -functions that checks for lower character
  *
  *Return: 1 if lower character 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
