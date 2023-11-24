#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

int len;

	

len = _printf("%X", 16);
printf ("\nreturn : %d\n", len);

len = _printf("%X", UINT_MAX);
printf ("\nreturn : %d\n\n", len);

len = _printf("%X", 15);
printf ("\nreturn : %d\n\n", len);

len = _printf("%X", 0);
printf ("\nreturn : %d\n\n", len);

len = _printf("Let's try to printf a simple sentence.\n");
printf ("return : %d\n\n", len);

len = _printf(NULL);
_printf ("return sting forma = NULL : %d\n\n", len);

len = _printf("Percent:[%%]\n");
_printf ("return : %d\n\n", len);

len = _printf("ABCDEF <-->[%r]\n", "ABCDEF");
_printf ("return : %d\n\n", len);

len = _printf("Percent:[%%%]\n");
_printf ("return : %d\n\n", len);

len = _printf("Percent:[%%%%]\n");
_printf ("return : %d\n\n", len);

len = _printf("One Percent at the end %");
_printf ("return : %d\n\n", len);

len = _printf("Character: [%c]\n", 'H');
_printf ("return : %d\n\n", len);

len = _printf("Character NULL : [%c]\n", NULL);
_printf ("return : %d\n\n", len);

len = _printf("String:[%s]\n", "I am a string !");
_printf ("return : %d\n\n", len);

len = _printf("String:[% s]\n", "I am a string !");
_printf ("return : %d\n\n", len);

len = _printf("String NULL:[%s]\n", NULL);
_printf ("return : %d\n\n", len);

len = _printf("Positive:[%d]\n", 762534);
_printf ("return : %d\n\n", len);

len = _printf("Zero:[%d]\n", -0);
_printf ("return : %d\n\n", len);

len = _printf("Negative:[%d]\n", -762534);
_printf ("return : %d\n\n", len);

len = _printf("Combinaison Car[%c]  String[%s]  int[%d]\n", 'X', "ABCDEF", -762534);
_printf ("return : %d\n\n", len);

len = _printf("ABCDEF -->ROT13-->[%R]\n", "ABCDEF");

	return (0);
}
