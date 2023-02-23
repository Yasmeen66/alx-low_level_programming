#include "6-main.h"
/**
* _abs - computes the absolute value of an integer
*@num: integer input
* Return: absolute value of an integer.
*/
int _abs(int num)
{
	if (num < 0)
		return ((-1 * num));
	else
		return (num);
}
