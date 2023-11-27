#include "main.h"
/**
 * rev_str - print a string in reverse
 * @args: parameter to print
 * Return: number of printed characters
 */
int rev_str(va_list args)
{
	int len = 0, i, count = 0;

	char *string = va_arg(args, char *);

	while (string[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		count += _putchar(string[i]);

	return (count);
}
