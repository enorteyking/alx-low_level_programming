#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints different combinations of three digits'
 * Return: always 0
 */

int main(void)
{
	int digit;
	int comb;
	int comb1;

	for (digit = 48; digit <= 57; digit++)
	{
		for (comb = digit + 1; comb <= 57; comb++)
		{
			for (comb1 = comb + 1; comb1 <= 57; comb1++)
			{
				putchar(digit);
				putchar(comb);
				putchar(comb1);
				if (digit < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
