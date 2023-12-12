#include "shell.h"

/**
 * set_info - initializes info_t struct
 * @info: struct adress
 * @av: argument vector
 */
void set_info(info_t *info, char **av)
	{
		int p = 0;

		info->fname = av[0];

		if (info->arg)
	{
		info->argv = strtow(info->arg, " \t");
		if (!info->argv)
		{
			info->argv = malloc(sizeof(char *) * 2);
			if (info->argv)
			{
				info->argv[0] = _strdup(info->arg);
				info->argv[1] = NULL;
			}
		}
		p = 0;
		if (info->argv)
		{
			while (info->argv[p] != NULL)
			{
				p++;
			}
		}
		info->argc = p;
		replace_alias(info);
		replace_vars(info);
	}
/**
 * clear_info - info_t struct initials
 * @info: address of dtruct
 * memset - pointer to the memory block
 */
void clear_info(info_t *info)
	{
		memset(info, 0, sizeof(*info));
	}
