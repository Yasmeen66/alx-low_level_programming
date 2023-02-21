#include <stdio.h>

/**
 * main-prints all possible combinations of single-digit numbers
 * Description:using main function
 * this program prints all possible combinations of single-digit numbers
 * Numbers must be separated by , followed by a space
 * Return:0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
