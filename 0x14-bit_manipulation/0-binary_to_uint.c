#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: if b is NULL or contains chars not 0 or 1 - 0
 * Otherwise - the converted number
 */

unsigned int binary_to_unit(const char *b)
{
	int len = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	/* find string lenght */
	while (b[len] != '\0')
		len++;
	len -= 1;

	/* iterate tring and if '1' then multiply by power of 2 */
	/* get power of 2 via binary (e.g 1<<2 = 100 in binary = 4) */
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << len));
		i++;
		len--;
	}
	return (sum);
}
