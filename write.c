#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 */
int _putchar(char c) { return (write(1, &c, 1)); }

/**
 * _puts - prints a string to stdout
 * @str: string to print
 * Return: number of chars printed
 */
int _puts(char *str)
{
	int len = 0;

	while (*str)
		len += _putchar(*str++);
	return (len);
}
