#include "main.h"
/**
 *_printf - produces output according to a format.
 *@format: a character string
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0, temp;
	va_list ap;

	va_start(ap, format);
	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == 'c')
			{
				_putchar(va_arg(ap, int));
				i++;
			}
			else if (*(format + i + 1) == 's')
			{
				count += printstring(va_arg(ap, char *)) - 1;
				i++;
			}
			else if (*(format + i + 1) == '%')
			{
				_putchar('%');
				i++;
			}
			else if ((*(format + i + 1) == 'd') || (*(format + i + 1) == 'i'))
			{
				temp = va_arg(ap, int);
				count += _printd(temp) - 1;
				i++;
			}
			else if (*(format + i + 1) == 'b')
			{
				count += brinary(va_arg(ap, unsigned int)) - 1;
				i++;
			}
			else
				_putchar('%');
			i++;
			count++;
		}
		else
		{
			_putchar(*(format + i));
			i++;
			count++;
		}
	}
	va_end(ap);
	return (count);
}
