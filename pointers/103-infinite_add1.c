#include "main.h"

/**
  *infinite_add - Function that adds two numbers
  *@n1: The first number
  *@n2: The second number
  *@r: The buffer array to hold sum of n1 and n2
  *@size_r: The size of array r
  *Return: A pointer to r or 0 if r cannot hold the sum
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int count1 = -1, count2 = -1, l = 0, p = 0, i = 0, y = 0, temp = 0, s;
	int j = 0;
	int a[size_r] = {0};

	while (n1[count1] != '\0')
		count1++;
	while (n2[count2] != '\0')
		count2++;
	if (count1 > count2)
{
		l = (count1 - count2);
		p = count1;
		s = count2;
}
	else if (count2 > count1)
{
		l = (count2 - count1);
		p = count2;
		s = count1;
}
	else if (count2 == count1)
{
		l = count2;
		p = count2;
}
	if (!(size_r > l + 1))
		return (0);
	if (s == count2)
{
		while (count2 >= 0)
{
			y = (temp + (n1[count1] - '0') + (n2[count2] - '0'));
			if (y >= 10)
{
				p = p + 1;
				a[i] = y % 10;
				temp = y / 10;
}
			else
{
				a[i] = y;
				temp = 0;
}
			i++;
			count1--;
			count2--;
}
		while (count1 >= 0)
{
			if (count1 != 0)
{
				y = (temp + (n1[count1] - '0'));
				if (y >= 10)
{
					p = p + 1;
					a[i] = y % 10;
					temp = y / 10;
}
				else
{
					a[i] = y;
					temp = 0;
}
}
			else
{
				y = (temp + (n1[count1] - '0'));
				if (y >= 10)
{
					p = p + 1;
					a[i] = y % 10;
					i++;
					a[i] = y / 10;
					count1--;
					continue;
}
				else
{
					a[i] = y;
					temp = 0;
					count1--;
					continue;
}
}
			i++;
			count1--;
}
}
	else if (s == count1)
{
		while (count1 >= 0)
{
			y = (temp + (n1[count1] - '0') + (n2[count2] - '0'));
			if (y >= 10)
{
				p = p + 1;
				a[i] = y % 10;
				temp = y / 10;
}
			else
{
				a[i] = y;
				temp = 0;
}
			i++;
			count1--;
			count2--;
}
		while (count2 >= 0)
{
			if (count2 != 0)
{
				y = (temp + (n1[count2] - '0'));
				if (y >= 10)
{
					p = p + 1;
					a[i] = y % 10;
					temp = y / 10;
}
				else
{
					a[i] = y;
					temp = 0;
}
}
			else
{
				y = (temp + (n1[count2] - '0'));
				if (y >= 10)
{
					p = p + 1;
					a[i] = y % 10;
					i++;
					a[i] = y / 10;
					count2--;
					continue;
}
				else
{
					a[i] = y;
					temp = 0;
					count2--;
					continue;
}
}
			i++;
			count2--;
}
}
	else
{
		while (count1 >= 0)
{
			if (count1 != 0)
{
				y = (temp + (n1[count1] - '0') + (n2[count2] - '0'));
				if (y >= 10)
{
					p = p + 1;
					a[i] = y % 10;
					temp = y / 10;
}
				else
{
					a[i] = y;
					temp = 0;
}
}
			else
{
				y = (temp + (n1[count1] - '0') + (n2[count2] - '0'));
				if (y >= 10)
{
					p = p + 1;
					a[i] = y % 10;
					i++;
					a[i] = y / 10;
					count2--;
					continue;
}
				else
{
					a[i] = y;
					temp = 0;
					count2--;
					continue;
}
}
			i++;
			count1--;
			count2--;
}
}
	if (!(size_r >= p + 1))
		return (0);
	while (p >= 0)
{
		r[j] = a[p];
		j++;
		p--;
}
	r[j] = '\0';
	return (r);
}
