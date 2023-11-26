#include "main.h"
/**
 * print_addr - Fonction print address (%p)
 * @args: list of argument to print
 * Return: number of parameters printed
 */
int print_addr(va_list args)
{
	int i, digit, count = 0;
	void *ptr;
	unsigned long  int value;

	ptr = va_arg(args, void *);

	if (ptr == NULL)
	{
		count += _putchar('(');
		count += _putchar('n');
		count += _putchar('i');
		count += _putchar('l');
		count += _putchar(')');
		return (count);
	}
	value = (unsigned long  int)ptr;
	count += _putchar('0');
	count += _putchar('x');
	i = sizeof(void *) * 2 - 1;
	/* un octet est est codé sur 2 digits hexa */
	/* Cherche le premier digit non nul */
	/* >> (4 * i) décale de 4xi bits les bits vers la droite soit 1 digit Hex*/
	/* & 0xF masque pour isoler digit unité en hex de value (après décallage)*/
	while (!((value >> (4 * i)) & 0xF))
	i--;

	/* Affichage de l'adresse hexadécimale de value */
	for ( ; i >= 0; i--)
	{
		digit = (value >> (4 * i)) & 0xF;
		if ((digit < 10))
			count += _putchar('0' + digit);
		else
			count += _putchar('a' + digit - 10);
	}
	return (count);
}
