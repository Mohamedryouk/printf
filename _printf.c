#include "main.h"
/**
 * _printf- custom prinrf
 * @format: num of argument passed
 * Return: return count
 **/
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, count = 0;

	va_start(ap, format);

	while (format[i])
	{
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
		{
		case 'c':
			print_char(ap);
			count++;
			break;
		case 's':
			count += print_string(ap);
			break;
		case '%':
			print_percent(ap);
			count++;
			break;
		case 'd':
			count += print_dec(ap);
			break;
		}
	}
	else
	{
		write(1, &format[i], 1);
		count++;
	}
	i++;
	}
	va_end(ap);
	return (count);
}
