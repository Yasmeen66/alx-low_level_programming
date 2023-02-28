#include "6-main.h"
#include <stdio.h>

/**
 * puts2 -  prints every other character of a string.
 * starting with the first character.
 * followed by a new line.
 * @str: sequence of char
 * Return: void
 */

void puts2(char *str)
{
	int indx = 0;

	while (str[indx] != '\0')
	{
		if (indx % 2 == 0)
		{
			putchar(str[indx]);
		}
		indx++;
	}
	putchar('\n');
}
