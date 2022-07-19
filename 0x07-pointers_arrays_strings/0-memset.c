#include "main.h"

/**
 * _memset - fill n bytes of memory with a cosntant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number f bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[1] = b;
	}

	return (s);
}
