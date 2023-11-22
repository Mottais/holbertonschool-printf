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

	len2 = printf("test 1 : %r\n");
	len = _printf("test 1 : %r\n");
	printf("Length:[%d, %d]\n\n", len2, len);

	len2 = printf("test 2 : % s\n", "ABCDE");
	len = _printf("test 2 : % s\n", "ABCDE");
	printf("Length:[%d, %d]\n\n", len2, len);	

return (0);
}
