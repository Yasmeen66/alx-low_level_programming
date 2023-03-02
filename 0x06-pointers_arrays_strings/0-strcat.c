#include "0-main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings.
 * @dest: string
 * @src: string
 * Return:  pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);

	return (ptr);
}
