#include "shell.h"
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

