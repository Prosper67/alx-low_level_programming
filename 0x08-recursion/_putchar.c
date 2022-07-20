#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to std out
 * @c: character to be printed
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(i, &c, 1));
}
