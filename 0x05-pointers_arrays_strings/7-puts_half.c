#include "7-main.h"
#include <stdio.h>

/**
  * puts_half -  prints a string
  *
  * @str: arg *str
  *
  * Return: string to stdout
  */

void puts_half(char *str)
{
	int half_len;

	half_len = strlen(str) / 2;
	while (str[half_len] != '\0')
	{
		putchar(str[half_len]);
		(half_len)++;
	}
	putchar('\n');
}
