#include "main.h"

/**
 * _strstr -  locates a substring
 *@haystack: string
 *@needle: string
 *Return: pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);

	return (ptr);
}
