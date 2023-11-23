#include "main.h"
/**
 * Dec_to_Bin - Fonction print unsigned int argument converted to binary (%b)
 * @args: list of argument to print
 * Return: number of parameters printed
 */
int Dec_to_Bin(va_list args)
{

	int i = 0, count = 0;
	int buff[32];
	unsigned int n = va_arg(args, int);


	if (UINT_MAX  < n)
	return (-1);

	/* mémorise chaque digit de n (base 2) dans un tableau */
	for (i = 0; n ; i++)
	{
		buff[i] = n % 2;
		n /= 2;
	}


	/* imprime les digits du tableau sauf l'unité*/
	for (i--; i > 0 ; i--)
	count += _putchar('0' + buff[i]);

	/* imprime l'unité */
	count += _putchar('0' + buff[0]);

	return (count);
}
