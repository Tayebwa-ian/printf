#include "main.h"

/**
 * _printd - function prints decimal numbers that is base 10
 * @num: digit passed to the function
 * Return: length of printed characters
 */

int _printd(int num)
{
	int len = 0;
	unsigned int temp;

	if (num < 0)
	{
		len += _putchar('-');
		temp = -num;
	}
	else
		temp = num;
	if ((temp / 10)!= 0)
	{
		len += _printd(temp / 10);
	}
	len += _putchar('0' + (temp % 10));
	return (len);
}
