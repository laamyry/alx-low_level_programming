#include "variadic_functions.h"
/**
 * print_char - print's char.
 *
 * @c: char.
 * Return: void.
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_string - print's string.
 *
 * @s: string.
 * Return: void.
 */
void print_string(va_list s)
{
	char *string = va_arg(s, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 * print_int - print's int.
 *
 * @i: int.
 * Return: void.
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - print's float.
 *
 * @f: float.
 * Return: void.
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * prin²_all - print's anything.
 *
 * @format: string containing data.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	unsigned int m, n;
	prints_all types[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list type_data;
	char *separate = "";

	va_start(type_data, format);
	for (m = 0; format && format[m]; m++)
	{

		for (n = 0; types[n].compare; n++)
		{
			if (*(types[n].compare) == format[m])
			{
				printf("%s", separate);
				types[n].f(type_data);
				separate = ", ";
				break;
			}
		}
	}
	printf("\n");
	va_end(type_data);
}
