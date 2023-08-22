#include "main.h"

/**
 * _printd - function prints decimal numbers that is base 10
 * @num: digit passed to the function
 * Return: length of printed characters
 */

int _printd(int num)
{
	int len = 0;

	if (num < 0)
	{
		len += _putchar('-');
		num = -num;
	}
	if ((num / 10) != 0)
	{
		len += _printd(num / 10);
	}
	len += _putchar('0' + num % 10);
	return (len);
}
