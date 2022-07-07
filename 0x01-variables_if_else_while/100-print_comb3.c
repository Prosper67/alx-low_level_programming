#include <stdio.h>
/**
 * main - Entry point, print two different digits using putchhar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++) /*prints tens places*/

	{
		for (ones = '0'; ones <= '9'; ones++) /*prints one place*/
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '9' && ones == '9')) /* skip comma at the end*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
