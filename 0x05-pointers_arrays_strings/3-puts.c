#include "main.h"

/**
 * _putchar - writes a character to the standard output
 * @c: The character to be written
 * Return: On success, the number of characters written.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _puts - prints a string
 * @str: - pointr to the string
 * Return: string and new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
