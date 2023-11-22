#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	int len;
	int len2;

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	len = _printf("Unknown:[%r]\n");
	len2 = printf("Unknown:[%r]\n");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	return (0);
}
