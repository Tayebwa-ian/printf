#include "main.h"
/**
 *_printf - produces output according to a format.
 *@format: a character string
 *Returns: number of characters printed
 */
int _printf(const char *format, ...)
{
	int ch, i = 0;
	va_list ap;
	char *str;

	va_start(ap, format);

	while (format + i != NULL && *(format + i) != '\0')
	{
		if (*(format + i) == '%' && *(format + i + 1) == 'c')
		{
			ch = va_arg(ap, int);
			_putchar(ch);
		}
	        if (*(format + i) == '%' && *(format + i + 1) == 's')
		{
			str = va_arg(ap, char *);
			printstring(str);
		}
		i++;
	}
	return (i);

}
