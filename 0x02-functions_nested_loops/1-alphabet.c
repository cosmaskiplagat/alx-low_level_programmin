#include "main.h"
/**
 * main - entry point
 * Description:
 * This function is the entry point of the program. It prints the characters
 * '_putchar' to the standard output (stdout) using the _putchar function.
 * Return:
 * Always 0.
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        _putchar(letter);
    }

    _putchar('\n');
}

