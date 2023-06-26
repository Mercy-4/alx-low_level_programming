#include "main.h"

/**
 * _putchar - writes a character to the standard output
 * @c: The character to be written
 * Return: On success, the number of characters written.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c);

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: the used strig reference
 * Return: 0
 */
void puts2(char *str)
{
int z = 0;

while (str[z] != '\0')
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
z++;
}
_putchar('\n');
}
