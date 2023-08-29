#include "main.h"

/**
 * print_mux - selects the correct print function
 * @s: format specifier
 * Return: pointer to correct print function
 */
int (*print_mux(char s))(va_list ap, Flags *f)
{
	/* TODO: adjust prototype and impelment */
	(void)s;
	return (NULL);
}

/**
 * flag_mux - selects the correct flag function
 * @s: format specifier
 * @f: pointer to struct containing flags
 * Return: 1 if a flag was turned on, 0 otherwise
 */
int flag_mux(char s, Flags *f)
{
	/* TODO: adjust prototype and impelment */
	(void)s;
	(void)f;
	return (0);
}
