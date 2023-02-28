#include "5-main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: array name
 * Return: void
 */

void rev_string(char *s)
{
	int len, start = 0;
	char s2[100];

	len = (sizeof(s)) - 1;
	while (len >= 0)
	{
		s2[start] = *(s - len);
		start++;
		len--;
	}
	start = 0;
	len = (sizeof(s)) - 1;
	while (start <= len)
	{
		*(s + start) = s2[start];
		start++;
	}
}
