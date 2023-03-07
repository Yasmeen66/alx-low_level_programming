#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: sequence of characters.
 * @src: sequence of characters.
 * @n: number of  bytes from memory area src to memory area dest.
 * Return:  pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
