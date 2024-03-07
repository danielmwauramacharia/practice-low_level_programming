#include "main.h"

/**
  *_strcmp - Function that compares two strings
  *@s1: The first string
  *@s2: The second string
  *
  *Return: s2-s1
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
{
		if (s2[i] == '\0' && s1[i] != '\0')
			return (0 - (s1[i]));
		else if (s1[i] == '\0' && s2[i] != '\0')
			return (s2[i]);
		else if (s1[i] == s2[i])
{
			i++;
			continue;
}
		else
			return (s1[i] - s2[i]);
}
	return (0);
}

