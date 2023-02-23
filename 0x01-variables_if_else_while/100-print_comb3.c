#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints all possible different combinations of two digits'
 * Return: always 0
 */

int main(void)
{
	int digit;
	int comb;

	for (digit = 48; digit <= 57; digit++)
	{
		for (comb = digit + 1; comb <= 57; comb++)
		{
			putchar(digit);
			putchar(comb);
			if (digit < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);

}
