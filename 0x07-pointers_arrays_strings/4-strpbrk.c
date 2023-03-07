#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of bytes.
*@accept: string,
*@s: string.
*Return: pointer to the byte in s.
*/

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);

	return (ptr);
}
