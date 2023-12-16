#include "shell.h"

/**
 * @str: to be printed string
 * _eputs - input string printer
 * Return: Null
 */
void _eputs(char *str)
{
	int j = 0;

	if (str == NULL)
		return;
	while (*(str + j))
	{
		_eputchar(str[j]);
		j++;
	}
}

/**
 * @str: string to be printed
 * @fd: file descriptor to write
 * _putsfd - prints input string
 * Return: the number of chars put
 */
int _putsfd(char *str, int fd)
{
	int l = 0;

	if (!str)
		return (0);
	while (*str != '\0')
	{
		l += _putfd(*str, fd);
		str++;
	}
	return (l);
}

/**
 * _putfd - writes the character c to given fd
 * @c: haracter to print
 * @fd: file descriptor to write
 *
 * Return: On success 1, on error -1
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if ((c == BUF_FLUSH) | (i >= WRITE_BUF_SIZE))
	{
		write(fd, buf, i);
		i = 0;
	}

	if (!(c == BUF_FLUSH))
		buf[i++] = c;
	return (1);
}

