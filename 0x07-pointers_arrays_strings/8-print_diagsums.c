#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix of integers.
 * @a: 2d array
 * @size: number of rows and columns
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + (*(*(a + i) + j));
			}
			else if ((i + j) == (size - 1))
			{
				sum2 = sum2 + *(*(a + i) + j);
			}
		}
	}
		_putchar((sum1 % 10) + '0');
		_putchar(',');
		_putchar(' ');
		_putchar((sum2 % 10) + '0');
}
