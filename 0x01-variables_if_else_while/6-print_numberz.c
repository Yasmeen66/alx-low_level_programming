#include <stdio.h>

/**
 * main-prints all single digit numbers of base 10 starting from 0
 * Description:using main function
 * this program prints all single digit numbers of base 10 starting from 0
 * using the putchar function
 * Return:0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
