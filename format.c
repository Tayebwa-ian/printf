#include "main.h"
/**
 *_printf - produces output according to a format.
 *@format: a character string
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count, i = 0;
	char *s;
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
			}
			else if (*(format + i + 1) == 's')
			{
				s = va_arg(ap, char *);
				count += printstring(s) - 1;
			}
			else if (*(format + i + 1) == '%')
			{
				_putchar('%');
			}
			else
			{
				_putchar('%');
				_putchar(*(format + i + 1));

			}
			i += 2;
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
