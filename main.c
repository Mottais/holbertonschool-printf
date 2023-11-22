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

len2 = printf("test d : %kk\n");
len = _printf("test d : %kk\n");
printf("Length:[%d, %d]\n\n", len2, len);	

len2 = printf("test d : %cc\n", 'X');
len = _printf("test d : %cc\n", 'X');
printf("Length:[%d, %d]\n\n", len2, len);

len2 = printf("test%k\n");
len = _printf("test%k\n");
printf("Length:[%d, %d]\n\n", len2, len);	

len2 = printf("test%%\n");
len = _printf("test%%\n");
printf("Length:[%d, %d]\n\n", len2, len);	

len2 = printf("test%%%\n");
len = _printf("test%%%\n");
printf("Length:[%d, %d]\n\n", len2, len);	

len2 = printf("test%%%%\n");
len = _printf("test%%%%\n");
printf("Length:[%d, %d]\n\n", len2, len);

len2 = printf("test%%%%%\n");
len = _printf("test%%%%%\n");
printf("Length:[%d, %d]\n\n", len2, len);

len2 = printf("test%%%%%%\n");
len = _printf("test%%%%%%\n");
printf("Length:[%d, %d]\n\n", len2, len);

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");



_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
    
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");

len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");

_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
    
len2 = printf("test %c %s\n",'X', NULL);
len = _printf("test %c %s\n",'X', NULL);
printf("Length:[%d, %d]\n\n", len2, len);

	return (0);
}
