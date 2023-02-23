#include "1-main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description:' prints the alphabet, in lowercase'
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
