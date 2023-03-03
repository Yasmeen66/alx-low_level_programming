#include "6-main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: string variable
 * Return: string.
 */

char *cap_string(char *str)
{
	int i, j;
	char cap[15] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; cap[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (str[i] >= 'a' && str[j] <= 'z')
					str[i] = str[i] - 32;
			}
			if (str[i] == cap[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
