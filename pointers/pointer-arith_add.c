#include <stdio.h>

/**
  *main -pointer arithmetic on array
  *
  *Return: 0 success
  */
int main(void)
{
	int a[10] = {1, 2, 3, 4, 5};
	int *p = &a[0];

	printf("The value is: %d\n", *p);
	printf("The memory address of p is :%p\n", p);
	p = p + 2;
	printf("The value of p is: %d\n", *p);
	printf("The memory address of p is :%p\n", p);
	*p = 78;
	printf("The value of p is: %d\n", *p);
}
