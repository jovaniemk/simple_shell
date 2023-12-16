#include "shell.h"

/**
 * _putchar - print character c to stdout
 * @c: prints the character
 * Return: if success return 1, on error -1
 */
int _putchar(char c)
{
	static int ch;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || ch >= WRITE_BUF_SIZE)
	{
		write(1, buf, ch);
		ch = 0;
	}
	if (c != BUF_FLUSH)
		buf[ch++] = c;
	return (1);
}

/**
 * _strcpy - copies a string
 * @src: source
 * @dest: destination
 * Return: destination of pointer
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
{
	if (dest == src || src == NULL)
		return (dest);
	char *ret = dest;

	while (*src)
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = *src;
	return (ret);
}
	while (src[p])
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = 0;
	return (dest);
}

/**
 *_puts - input string printed
 *@str: the string to be printed
 * Return: null
 */
void _puts(char *str)
{
	int ch = 0;

	if (!str)
		return;

	while (str[ch] != '\0')
	{
		_putchar(str[ch]);
		ch++;
	}
}

/**
 * _strdup - string duplicator
 * @str: the string to duplicate
 * Return: duplicated string
 */
char *_strdup(const char *str)
{
	if (str == NULL)
		return (NULL);

	int length = 0;
	const char *temp = str;

	while (*temp++)
	length++;
	char *ret = (char *)malloc(sizeof(char) * (length + 1));

	if (!ret)
		return (NULL);
	for (int i = length; i >= 0; i--)
	{
		ret[length - i] = str[i - 1];
	}
	ret[length] = '\0';
	return (ret);
}
