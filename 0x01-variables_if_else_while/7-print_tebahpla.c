#include <stdio.h>

/**
 * main-prints the lowercase alphabet in reverse
 * Description:using main function
 * this program prints the lowercase alphabet in reverse,
 * followed by a new line.
 * using the putchar function
 * Return:0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
