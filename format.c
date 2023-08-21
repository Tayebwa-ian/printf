#include "main.h"
/**
 *_printf - produces output according to a format.
 *@format: a character string
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int ch, i = 0;
	va_list ap;
	char *str;

	va_start(ap, format);

	while (format + i != NULL && *(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == 'c')
			{
				ch = va_arg(ap, int);
				_putchar(ch);
			}
			else if (*(format + i + 1) == 's')
			{
				str = va_arg(ap, char *);
				printstring(str);
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
		}
		else
		{
			_putchar(*(format + i));
		}
		i++;
	}
	va_end(ap);
	return (i);

}
