#define MAIN_H
#ifndef MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchcar(cahar c);

/**
 * reset_to_98 - takes a pointer to an int as a parameter and updates the value it points to 98
 * @n: pointer to int n
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the value of two integers
 * @a: interger to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b);

/** main - returns the lenght of a string
 * @s: string
 */

int _strlen(char *s);

/**
 * _puts - prints a string, followed by a new line, to standard output
 * @str: string to print
 */

void _puts(char *str);

/** print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reversee
 *
 */

void print_rev(char *s);

/**
 * print_rev - reverse a string
 * @s: strinig to reverse
 */

void rev_string(char *s);

/**
 * puts2 - prints every other character of a string, folowed by a new line
 * @str: string to print
 */

void puts2(char *str);

/**
 * puts_half - prints half  of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @n: array
 * @n: number of elements
 */

void print_array(int *a, int n);

/**
 * _strcpy - copies te string pointed to by src, including the terminating null byte (\0),
 * to the buffer pointed to by the dset
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 */

char *_strcpy(char *dset, car *src);

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s);

#endif
