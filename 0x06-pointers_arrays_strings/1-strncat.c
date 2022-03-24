#include "main.h"
/**
 * _strncat - concatenate two strings with at most n bytes
 * @dest: parameter
 * @src: parameter
 * @n: integer to compare index to
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
