#include <stdio.h>

/**
  *main -entry of program
  *
  *Return: 0 success
  */
int main(void)
{
	printf("size of int is: %ld", sizeof(int));
	printf(" byte(s)\n");
	printf("size of char is: %ld", sizeof(char));
	printf(" byte(s)\n");
	printf("size of float is: %ld", sizeof(float));
	printf(" byte(s)\n");
	printf("size of long int is: %ld", sizeof(long int));
	printf(" byte(s)\n");
	printf("size of long long int is: %ld", sizeof(long long int));
	printf(" byte(s)\n");
	return (0);
}
