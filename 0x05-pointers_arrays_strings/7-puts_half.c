#include "main.h"

/**
 * _putchar - writes the character c to standard output
 * @c: The character to be written
 *
 * Return: On success, the number of characters written
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * puts_half - function that prints half of a string
 * @str: This is the input string
 */
void puts_half(char *str)
{
int full_string, half_string;

full_string = 0;
while (str[full_string] != '\0')
full_string++;

half_string = full_string / 2;

if (full_string % 2 == 1)
half_string++;

while (half_string < full_string)
{
_putchar(str[half_string]);
half_string++;
}
_putchar('\n');
}
