#ifndef MAIN_H
#define MAIN_H

/* -------------------------------------------------------- */
/* ----------------------- HEADERS ------------------------ */
/* -------------------------------------------------------- */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* -------------------------------------------------------- */
/* ----------------------- CONSTS ------------------------- */
/* -------------------------------------------------------- */

/* -------------------------------------------------------- */
/* ------------------ STRUCTS & ENUMS --------------------- */
/* -------------------------------------------------------- */
/**
 * struct flags - struct for flags
 * @minus: flag for minus
 * @plus: flag for plus
 * @space: flag for space
 * @hash: flag for hash
 * @zero: flag for zero
 *
 * Description: struct for flags
 */
typedef struct flags
{
	int minus;
	int plus;
	int space;
	int hash;
	int zero;
} Flags;

/* -------------------------------------------------------- */
/* --------------------- PROTOTYPES ----------------------- */
/* -------------------------------------------------------- */

/* Main printf Function - printf.c */
int _printf(const char *format, ...);

/* UTILS - utils.c */
int _is_digit(char c);
int _atoi(char *s);
unsigned int _strlen(char *s);

/* Write Functions - write.c */
int _putchar(char c);
int _puts(char *str);

/* Muxes Functions - multiplexers.c */
int (*print_mux(char s))(va_list ap, Flags *f);
int flag_mux(char s, Flags *f);

#endif
