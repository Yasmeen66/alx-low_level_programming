#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: char
 * Return: pointer to the first occurrence of the character c in the string s.
 *  or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < (int)(sizeof(s)); i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (NULL);
}
