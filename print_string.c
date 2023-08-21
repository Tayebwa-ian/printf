#include "main.h"
/**
 *printstring - Prints characters of a string
 *@str: pointer to the string
 *Return: length of a string
 */

int printstring(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	return (i);
}
