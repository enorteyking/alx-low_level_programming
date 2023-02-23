#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints all possible combinations of single-digit numbers'
 * Return: always 0
 */

int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);		
		if (digit < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
