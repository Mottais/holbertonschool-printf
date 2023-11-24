#include "main.h"
/**
 * ROT13 - print a stringing encoded using rot13
 * @args: string passed in arg
 * Return: number of printed char
 */
int ROT13(va_list args)
{
	int i, j, count = 0;
	char array1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char array2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *string = va_arg(args, char *);

	for (i = 0; string[i]; i++, count++)
	{
		for (j = 0; array1[j]; j++)
		{
			if (string[i] == array1[j])
			{
				_putchar(array2[j]);
				break;
			}
		}
		if (string[i] != array1[j])
			_putchar(string[i]);
	}

	return (count);
}
