#include "4-main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: sequence of char
 * Return: void
 */

void print_rev(char *s)
{
	int end;

	end = (strlen(s)) - 1;
	while (end >= 0)
	{
		putchar(s[end]);
		end--;
	}
	putchar('\n');
}
