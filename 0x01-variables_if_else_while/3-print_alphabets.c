#include <stdio.h>
#include <unistd.h>

/**
 * main-prints the alphabet in lowercase, and then in uppercase
 * Description:using main function
 * this program prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return:0
 */

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
