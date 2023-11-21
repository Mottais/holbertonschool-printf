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
	int i, j, count = 0, fonction_trouvee = 0;

	TypeDef_CodeFormat_Fonction CodeFormat_Fonction[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(args, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			j = 0;
			for (j = 0; CodeFormat_Fonction[j].Code_Format != 0; j++)
			{
				if (format[i + 1] == *CodeFormat_Fonction[j].Code_Format)
				{
					i++; /* Passer le caractère '%' */
					count  = count + CodeFormat_Fonction[j].Pointeur_Fonction_Print(args);
					fonction_trouvee = 1;
				}
			}
			/* gestion des cas où le code format n'existe pas */
			if (fonction_trouvee == 0 && format[i + 1] != '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
		_putchar(format[i]);
		count++;
		}
	}
	va_end(args);
	return (count);
}

