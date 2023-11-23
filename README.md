# Printf Project



# Description:

In this project, we recreated the function printf with has its basic functions (examples: such as printing integers, strings or characters).

## What is the function printf?
The printf() function **formats and prints a series of characters and values to the standard output stream stdout** . Format specifications, beginning with a percent sign (%), determine the output format for any argument-list following the format-string.

Here are some examples of basic uses of printf:

>printf ("Characters: %c %c \n",  'z',  80); **Output-->** Characters: z P
>printf ("%s \n",  "Educative"); **Output-->** Educative
>printf ("Integers: %i %u \n",  -3456,  3456); **Output-->** Integers: -3456 3456


## Compilation line
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Requirements

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation; do not push your own `main.c` file. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called `main.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the `_putchar` function for this project

## How does it work?

<a href="https://ibb.co/C7QM1q9"><img src="https://i.ibb.co/2tdsnwM/0-0.png" alt="0-0" border="0" /></a>

## Example

    #include  "main.h"
    int  main(void)
    {
    _printf("This is my printf function!");
    return (0);
    }
output:

    This is my printf function!


# Testing

    len = _printf("Let's try to printf a simple sentence.\n");
    _printf ("return : %d\n\n", len);

    len = _printf(NULL);
    _printf ("return sting forma = NULL : %d\n\n", len);

    len = _printf("Percent:[%%]\n");
    _printf ("return : %d\n\n", len);

    len = _printf("Unknown:[%r]\n");
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

    len = _printf("Combinaison Car[%c] String[%s] int[%d]\n", 'X', "ABCDEF", -762534);
    _printf ("return : %d\n\n", len);
and the output would be:

    Let's try to printf a simple sentence.
    return : 39

    return sting forma = NULL : -1

    Percent:[%]
    return : 12

    Unknown:[%r]
    return : 13

    Percent:[%%]
    return : 13

    Percent:[%%]
    return : 13

    One Percent at the end return : -1

    Character: [H]
    return : 15

    Character NULL : []
    return : 21

    String:[I am a string !]
    return : 25

    String:[I am a string !]
    return : 25

    String NULL:[(null)]
    return : 21

    Positive:[762534]
    return : 18

    Zero:[0]
    return : 9

    Negative:[-762534]
    return : 19

    Combinaison Car[X] String[ABCDEF] int[-762534]
    return : 49

## Main.c
Here is a default main.c that can be used to test our new printf function:
```
#include <limits.h>
#include <stdio.h>
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
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
It can be tested using the following gcc command:
-> `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`

And you should get something like that:
```
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

## Authors of this project
Léo Cheneviere Jestin--> https://github.com/lchenevi
Yannick Mottais--> https://github.com/Mottais/

