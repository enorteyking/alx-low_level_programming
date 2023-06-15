#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string into newly allocated array
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */

char _strdup(char *str)
{
	int i;
	int j;
	char *p;
	
	if (str == 0)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	p = malloc(sizeof(char) * (j + ));
	if (p = 0)
	{
		return (NULL);
	}
	for (i = 0, *(str + 1) != '\0'; i++)
	{
		*(p + i) = *(str + i);
	}
	*(p + i) = '\0';
	return (p);
}
