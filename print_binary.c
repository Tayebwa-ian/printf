#include "main.h"
/**
 *brinary - print brinary
 *@n: the integer to turn into binarry
 *Return: number of characters printed
 */
int brinary(unsigned int n)
{
	int i = 0;

	if (n / 2 == 1)
	{
		i += _putchar('0' + n / 2);
	}
	else
	{
		brinary(n / 2);
	}
	i += _putchar('0' + n % 2);
	return (i);
}
