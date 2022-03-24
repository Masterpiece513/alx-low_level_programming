#include "main.h"
/**
 * _strncpy - finction that copies a string up to n bytes
 * if the len of the source string is less than n,
 * the remainder of dest will be filled with null bytes.
 * @dest: pointer to string copy
 * @src: source string
 * @n: max number of byte to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
