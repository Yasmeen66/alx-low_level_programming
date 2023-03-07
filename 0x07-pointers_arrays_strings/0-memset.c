#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: sequence of characters
 * @b: constant byte
 * @n: bytes of the memory area pointed to by s.
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr = b;
		*ptr++;
	}
	return (s);
}
