#include "main.h"
#include <stdio.h>
/**
  *print_to_98 - prints from n to 98
  *@n: the starting integer
  *
  *Return: return n
  */
void print_to_98(int n)
{
	int i, last = 98;

	if (n == 98)
		printf("%d\n", n);
	else
{
		if (n > 98)
{
			for (i = n; i > 98; i--)
				printf("%d, ", i);
}
		else
{
			for (i = n; i < 98; i++)
				printf("%d, ", i);

}
		printf("%d\n", last);
}
}
