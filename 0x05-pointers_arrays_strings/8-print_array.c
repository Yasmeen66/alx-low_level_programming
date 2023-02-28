#include "8-main.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers.
 *followed by a new line.
 *@n:the number of elements of the array to be printed
 *@a:array name
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
