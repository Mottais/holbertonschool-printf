#ifndef _EXISTE_DEJA_
#define _EXISTE_DEJA_
/**
 * struct CodeFormat_Fonction - CodeFormat-->NameFonction
 *
 * @Code_Format: The code of format
 * @Pointeur_Fonction_Print: The function associated
 */
typedef struct CodeFormat_Fonction
{
	char *Code_Format;
	int (*Pointeur_Fonction_Print)();
} TypeDef_CodeFormat_Fonction;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);
int print_i_decimal(va_list args);

#endif
