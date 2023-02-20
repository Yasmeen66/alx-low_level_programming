#include <stdio.h>

/**
 * main-prints all the numbers of base 16 in lowercase
 * Description:using main function
 * this program prints all the numbers of base 16 in lowercase
 * using the putchar function
 * Return:0
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
