#include <stdio.h>

/**
  *main -does pointer subtractions 
  *
  *Return: 0 success
  */
int main(void)
{
	int a[10] = {1,2,3,4,5,6,7};
	int *p = a;
	int *q = &a[6];
	int d;

	printf("The value of a is :%d\n", a[0]);
	printf("The value at pointer p is:%d\n", *p);
	printf("The memory address of a: %p", &a);
	printf(" and the memory address of p is: %p\n", p);
	printf("The value at pointer q: is: %d\n", *q);
	printf("The memory address of pointer q is: %p\n", q);
	d = p - q;
	printf("The value of d is: %d\n", d);
}
