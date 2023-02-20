#include <stdio.h>

/**
 * main-prints the alphabet in lowercase, and then in uppercase
 * Description:using main function
 * this program prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return:0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
