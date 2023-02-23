#include "main.h"
/**
 * postitive_or_negative - prints if integer is positive or negative
 * @i: integer number
 * Return: 0
 */
void postitive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
		return;
	}
	else if (i == 0)
	{
		printf("0 is zero");
		return;
	}
	else
	{
		printf("%d is negative", i);
		return;
	}
}
