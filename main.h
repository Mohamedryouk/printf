#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int _putchar(char c);
int print_string(va_list ap);
int print_char(va_list ap);
int _strlen(char *s);
int print_percent(va_list ap, param_t *param);
int _printf(const char *format, ...);
#endif
