#include <stdio.h>

/**
  *main -declaration and initialization of double pointer
  *
  *Return: 0 success
  */
int main(void)
{
	int a = 10;
	int *p = &a;
	int **q = &p;
	int ***r = &q;

	printf("The value of a is: %d %d %d %d\n", a, *p, *(*q), *(*(*r)));
	printf("The memory address of a is: %p\n", &a);
	printf("The memory address of p is: %p\n", &p);
	printf("The memory address stored at pointer p is: %p\n", p);
}
