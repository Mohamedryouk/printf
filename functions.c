#include "main.h"
/**
 * print_string- prints a string
 * @ap: argument
 * Return
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
 * _putchar- print char
 *@c: char
 *
 *Return: return char to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _putchar- prints a char
 * @ap: argument
 *
 * Return: return char as int
 */
int print_char(va_list ap)
{
	char s;

	char s = va_arg(ap, int);
	_putchar(s);
	return (1);
}
/**
 * _strlen - string length
 * @s: pointer to the string
 * Return: returns the length
 */
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
 * @param:
 *
 * Return: return the percent
 */
int print_percent(va_list ap, param_t *param)
{
	(void)ap;
	(void)params;

	return (_putchar("%"));
}
