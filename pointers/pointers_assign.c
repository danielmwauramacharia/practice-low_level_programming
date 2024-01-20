#include <stdio.h>

/**
  *main -variables are assigned to pointers
  *
  *Return: 0 success
  */
int main(void)
{
	int a = 10, b = 11;
	int *p, *q;

	p = &a;
	q = &b;

	printf("The value of a is: %d\n", a);
	printf("The value of a from a pointer is: %d\n", *p);
	printf("The memory address stored by the pointer is %p\n", p);
	printf("The memory address of the variable is: %p\n", &a);
	printf("The memory address of the pointer is:%p\n", &p);

	*q = *p;
	printf("The value of variable after dereference: %d\n", *q);
	printf("The memory address of the variable: %p\n", q);
	printf("The memory address of variable b is: %p\n", &b);
	printf("The memory address of variable: %p\n", p);
	printf("The memory address of variable:%p\n", &a);
}


