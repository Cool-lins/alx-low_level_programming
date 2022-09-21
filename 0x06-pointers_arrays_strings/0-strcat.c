#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: bytes to use from source
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int b = 0, p = 0;

	while (dest[a] != '\0')
		a++;

	while (src[p] != '\0' &&)
	{
		dest[a] = src[p];

		a++;
		p++;
	}
	dest[a] = '\0';

	return (dest);
}
