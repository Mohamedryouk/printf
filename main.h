#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int print_char(va_list ap);
int _strlen(char *s);
int _putchar(char c);
int print_string(va_list ap);
int print_init(va_list ap, char buffer[]);
int print_percent(va_list ap);
int print_dec(va_list ap);
#endif
