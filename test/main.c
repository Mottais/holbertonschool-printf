#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"


int main() {

	int len;
	int len2;
	/*
	unsigned int ui;
	void *addr;
	*/  
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d %d\n", len, len2);

	len =_printf("Character:[%c]\n", 'H');
	len2 =printf("Character:[%c]\n", 'H');
	printf("%d %d\n", len, len2);

	len =_printf("String:[%s]\n", "I am a string !");
	len2 =printf("String:[%s]\n", "I am a string !");
	printf("%d %d\n", len, len2);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("%d %d\n", len, len2);

	len = _printf("Unknown:[%r]\n");
	len2 = printf("Unknown:[%r]\n");
	printf("%d %d\n", len, len2);
	return (0);
}

