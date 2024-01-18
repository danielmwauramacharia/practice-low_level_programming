#include <stdio.h>
#include <string.h>

/**
  *main -concatenate two strings
  *
  *Return: 0 success
  */
int main(void)
{
	char fname[30] = "daniel ";
	char lname[7] = "mwaura";

	strcat(fname, lname);
	printf("%s\n", fname);
	return (0);
}
