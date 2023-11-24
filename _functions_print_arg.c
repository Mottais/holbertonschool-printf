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

	if (string == 0)
	string = "(null)";

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}

/**
 * print_unknown - Fonction pour gérer le spécificateur inconnu
 * (imprime le caractère tel quel)
 * @args: list of argument to print
 * Return: number of parameters printed
 */
int print_unknown(va_list args)
{
	(void)(args);
	_putchar('%');
	return (1);
}

/**
 * print_decimal - Fonction pour gérer le spécificateur %d (decimal)
 * @args: list of argument to print
 * Return: number of parameters printed
 */
int print_decimal(va_list args)
{
	int i = 0, signe = 1, count = 0;
	int buff[10];
	int n = va_arg(args, int);



	if (n < INT_MIN || INT_MAX < n)
	return (-1);

	/* imprime '-' si n négatif */
	if (n < 0)
	{
	signe = -1;
	count += _putchar('-');
	}

	/* mémorise chaque digit de n (base 10) dans un tableau */
	do {
	buff[i] = n % 10;
	n /= 10;
	i++;
	} while (n);


	/* imprime les digits du tableau */
	for (i--; i >= 0 ; i--)
		count += _putchar('0' + buff[i] * signe);


	return (count);

}
