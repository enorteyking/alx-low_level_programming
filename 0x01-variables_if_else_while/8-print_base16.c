#include <stdio.h>

/**
 * main -Entry
 * Description: 'Prints all numbers of base 16'
 * Return: always 0
 */

int main(void)
{
	int i;
	char digit;
	for(i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for(digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	
	}
	putchar('\n');
	return (0);

}
