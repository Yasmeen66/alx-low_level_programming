#include <stdio.h>

/**
 * main-prints the alphabet in lowercase except q and e
 * Description:using main function
 * this program prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * Return:0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
