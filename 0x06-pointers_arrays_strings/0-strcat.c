#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: a pointer to the string to be concatenated upon.
 * @src: the source string to be append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (str[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
