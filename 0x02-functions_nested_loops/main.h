#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void);


/*function descriptions */


int _putchar(char c)
{
        return (write(1, &c, 1));
}


/**
 * print_alphabet - prints the letters of the alphabet
 */

void print_alphabet(void)
{
        int i;

        for (i = 'a'; i < 'z'; i++)
        {
                _putchar(i);
        }
}

