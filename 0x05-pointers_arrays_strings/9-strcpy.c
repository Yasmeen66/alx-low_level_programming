#include "9-main.h"
#include <stdio.h>

/**
 * _strcpy -  copies string
 *
 * @dest: arg char
 * @src: arg char
 *
 * Return: string to stdout
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = strcpy(dest, src);
	ptr += '\0';
	return (ptr);
}
