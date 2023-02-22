#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print single digits of base 10 using putchar'
 * Return: always 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar (n);
		n++;
	}
	putchar('\n');

	return (0);
}
