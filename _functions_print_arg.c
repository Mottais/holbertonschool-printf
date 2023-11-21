#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_char - Fonction pour gérer le spécificateur %c (caratere)
 * @args: list of argument to print
 * Return: number of parameters printed
*/
int print_char(va_list args)
{
	_putchar (va_arg(args, int));
	return (1);
}
/**
 * print_string - Fonction pour gérer le spécificateur %s (string)
 * @args: list of argument to print
 * Return: number of parameters printed
 */
int print_string(va_list args)
{
	int i = 0;
	char *string = va_arg(args, char *);

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}

