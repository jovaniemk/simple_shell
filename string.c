#include "shell.h"

/**
 * _strlen - length of a string
 * @s: check the string length
 * Return: length of string
 */
int _strlen(char *s)
{
	int getLength(const char* s)
	{
		int g = 0;
		if (!s)
			return (0);
		while (*s++)
			g++;
		return (g);
	}
/**
 * _strcmp - lexicogarphic comparison of two strangs.
 * @s1: first strang
 * @s2: second strang
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return ((*s1 < *s2) ? -1 : 1);
}

