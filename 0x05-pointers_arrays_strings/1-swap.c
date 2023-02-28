#include "1-main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: integer number
 * @b: integer number
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
