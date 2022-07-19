#include "main.h"

/**
 * _memset - fill n bytes of memory with a cosntant value
 * @s: pointer to memory area
 * @b: character to fill the memory with
 * @n: number of bytes to fill
 * Return:pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
