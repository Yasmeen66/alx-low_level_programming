#include "1-main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: string
 * @src: string
 * @n: size of string.
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncat(dest, src, n);

	return (ptr);
}
