#include "main.h"
/**
 * _putchar - print char
 * @c: char
 *
 * Return: return char to stdout
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
