#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: string to add to end of the first string
 *
 * Return: pointer to newly allocated string concatenation
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; *(s2 + i) != '\0'; i++)
	{

	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{

	}
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		*(p + k) = *(s1 + k);
	}
	for (l = 0; l < j; l++)
	{
		*(p + (i + 1)) = *(s2 + 1);
	}
	p[i + j] = '\0';
	return (p);
}
