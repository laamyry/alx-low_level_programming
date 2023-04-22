#ifndef _variadic_functions_h
#define _variadic_functions_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct all_print - print function and types.
 *
 * @compare: print type.
 * @f: print's function.
 */
typedef struct all_print
{
	char *compare;
	void (*f)(va_list);
} prints_all;

#endif
