#include <stdarg.h>
#ifndef _MAIN_H
#define _MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int print_decimal(int value);
int _print_string(va_list args);
int _puts(char *str);

#endif
