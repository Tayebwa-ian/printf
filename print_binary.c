#include "main.h"
/**
 *brinary - print brinary
 *@n: the integer to turn into binarry
 *Return: number of characters printed
 */
int brinary(unsigned int n)
{
	unsigned int i = 0, m = 0;

	if (n < m)
		return (-1);
	if (n == 0)
		i += _putchar('0');
	else if (n == 1)
		i += _putchar('0');
	else if (n / 2 == 1)
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
