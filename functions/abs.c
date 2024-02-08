#include "main.h"

/**
  *_abs -function that computes absolute value of an integer
  *@n: the integer
  *
  *Return: return absolute integer n
  */
int _abs(int n)
{
	if (n < 0)
{
		n = -1 * n;
		return (n);
}
	else
		return (n);
}
