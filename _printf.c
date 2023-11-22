#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - My function printf
 * @format: string to print
 * Return: number charcarter print
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count = 0;

	TypeDef_CodeFormat_Fonction CodeFormat_Fonction[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_decimal},
	{"i", print_i_decimal},
	{"%", print_unknown},
	{NULL, NULL}
};
	if (format == NULL)
	return (-1);

	va_start(args, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++; /* Passer le caractère '%' */
			j = 0;
			for (j = 0; CodeFormat_Fonction[j].Code_Format != 0; j++)
			{
				if (format[i] == *CodeFormat_Fonction[j].Code_Format)
				{
					count  = count + CodeFormat_Fonction[j].Pointeur_Fonction_Print(args);
					break;
				}
			}
			if (CodeFormat_Fonction[j].Code_Format == 0)
			{
				count = count + _putchar(format[i - 1]);
				count = count + _putchar(format[i]);
			}
		}
	else
	count = count + _putchar(format[i]);
	}
	va_end(args);
	return (count);
}

