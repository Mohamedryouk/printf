#include "main.h"
/**
 * print_dec- prints decimal integers
 * @ap: argument
 * Return: return the i
 */
int print_dec(va_list ap)
{
	int x = va_arg(ap, int);
	char buffer[1024];
	int i = 0, j = 0;

	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	do {
		buffer[i++] = (x % 10) + '0';
		x /= 10;
	} while (x > 0);
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
	return (i);
}

/**
 * print_string- prints a string
 * @ap: argument
 * Return: return len
 */
int print_string(va_list ap)
{
	char *s;
	int i;
	int len;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		s = "null";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
/**
 * print_char- prints a char
 * @ap: argu
 * Return: 0
 **/
int print_char(va_list ap)
{
	char s;

	s = va_arg(ap, int);
	_putchar(s);
	return (1);
}
/**
 * _strlen - string length
 * @s: list of arg
 * Return: returns the length
 **/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * print_percent- prints string
 * @ap: argument pointer
 * Return: return the percent
 */
int print_percent(va_list ap)
{
	(void)ap;
	return (write(1, "%%", 1));
}
