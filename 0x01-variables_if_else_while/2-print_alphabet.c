#include <stdio.h>

/**
 * main-prints the alphabet in lowercase
 * Description:using main function
 * this program prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
