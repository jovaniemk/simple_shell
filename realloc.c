#include "shell.h"

/**
 *_memset - with a constant byte fills the memory
 *@s: memory area from the pointer
 *@b: *s filled with byte
 *@n: filled bytes
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
		*(s + p) = b;
	return (s);
}

/**
 * ffree - string of strings freed
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
	{
		return;
	}

	while (*pp != NULL)
	{
		free(*pp);
		pp++;
	}
	free(a);
	}

/**
 * _realloc - reallocates memory
 * @ptr: malloc pointer
 * @old_size: previous block byte size
 * @new_size: new block byte size
 * Return: null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *q;

	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	old_size = (old_size < new_size) ? old_size : new_size;
	while (old_size > 0)
	{
		old_size--;
		q[old_size] = ((char *)ptr)[old_size];
	}
	free(ptr);
	return (q);
}
