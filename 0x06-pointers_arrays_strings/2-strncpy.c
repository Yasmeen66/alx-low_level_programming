#include "2-main.h"
#include <stdio.h>

/**
 * _strncpy -  copies a string.
 * @dest: string
 * @src: string
 * @n: size
 * Return: string variable
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncpy(dest, src, n);

	return (ptr);
}
