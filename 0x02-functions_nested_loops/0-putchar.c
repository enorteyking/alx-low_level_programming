#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the word "_putchar"'
 * Return: always 0
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
		{
		putchar(p[i]);
		}
		putchar('\n');
	return (0);

}
