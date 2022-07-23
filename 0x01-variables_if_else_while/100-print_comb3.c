#include <stdio.h>

/**
 * main - Entry point, print two different digits using putchhar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*prints tens places*/

	{
		for (ones = (tens + 1); ones <= '9'; ones++) /*one's ten+1*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9') /*print comma*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
