#include <stdio.h>

/**
 * main-prints the size of various types on the computer
 * Description:using main function
 * this program prints the size of various types on the computer
 * Return:0
 */

int main(void)
{
	char ch;
	int num1;
	long int num2;
	long long int num3;
	float num4;

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(num1));
	printf("Size of a long int: %d byte(s)\n", sizeof(num2));
	printf("Size of a long long int: %d byte(s)"\n, sizeof(num3));
	printf("Size of a float: %d byte(s)"\n, sizeof(num4));
	return (0);
}
