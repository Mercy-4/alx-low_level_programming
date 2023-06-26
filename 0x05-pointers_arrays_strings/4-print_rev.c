#include "main.h"
/**
 * _putchar - writes a character to the stdout
 * @c: The character to be written
 * Return: 0
 */
int _putchar(char c);

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 * Return: void
 */

void print_rev(char *s)
{
int start = 0;
while (s[start])
	start++;
while (start--)
	_putchar(s[start]);
_putchar('\n');
}
