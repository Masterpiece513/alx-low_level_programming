#include "main.h"
/**
*  _strcmp - Function which compares two strings
*@s1: first string
*@s2:second string
*Return: zero if s1 == s2, -ve if s1 < s2, +ve if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
