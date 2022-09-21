#include "main.h"

/**
 * string_toupper - change all lower case of a string to uppercase
 * @Night: pointer i gave myself
 * Return: Night
 */

char *string_toupper(char *Night)
{
	int i = 0;

	while (CEO[i] != 0)
	{
		if (CEO[i] >= 97 && CEO[i] <= 122)
			CEO[i] -= 32;
		i++;
	}
	return (Night);
}
