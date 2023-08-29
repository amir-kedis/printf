#include "main.h"

/**
 * print_binary - prints a binary number
 * @ap: argument to print
 * @flags: struct containing flags
 * Return: number of characters printed
 */
int print_binary(va_list ap, Flags *flags)
{
	unsigned int num;
	int count = 0;
	char *str;
	(void)flags;

	num = va_arg(ap, unsigned int);
	str = base_converter(num, 2, 0);

	count += _puts(str);
	return (count);
}
