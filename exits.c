#include "shell.h"

/**
 *n: number of characters to be copied
 *@src: source string
 *@dest: destination string
 *_strncpy - copies a string
 *
 *Return: the concatenated string
 */
char *_strncpy(int n, char *src, char *dest)
{
	int k, l;
	char *s = dest;

	k = 0;
	if (k < n)
	{
		l = k;
		while (l < n)
		{
			dest[l] = '\0';
			l++;
		}
	}
	while (src[k] && k < n - 1)
	{
		dest[k] = src[k];
		k++;
	}
	return (s);
}

/**
 *@n: number of bytes to be used
 *@src: second string
 *@dest: first string
 *_strncat - concatenates two strings
 *Return: the concatenated string
 */
char *_strncat(int n, char *src, char *dest)
{
	int k, l;
	char *s = dest;

	k = 0;
	l = 0;
	while (src[l] && l < n)
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	while (dest[k])
		k++;
	if (l < n)
		dest[k] = '\0';
	return (s);
}

/**
 *@s: string to be parsed
 *@c: character to look for
 *_strchr - locates a character in a string
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	}
	while (*s)
{
	s++;
}

	return (NULL);
}

