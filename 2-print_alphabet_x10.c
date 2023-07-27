#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
    char letter;
    int i;

    for (i = 0; i < 10; i++)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }

        // Only put newline after the inner loop is done printing the alphabet
        _putchar('\n');
    }
}
