#include "4-main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, cnt, tmp;

	cnt = n - 1;
	i = 0;

	while (i <= cnt)
	{
		tmp = a[i];
		a[i] = a[cnt];
		a[cnt] = tmp;
		i++;
		cnt--;
	}
}
