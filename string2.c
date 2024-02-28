#include "shell.h"
/**
 * _strdup - duplicates a string
 * @s: the string
 *
 * Return: pointer to string
 */
char *_strdup(char *s)
{
	int len = 0;
	char *ret;

	if (!s)
		return (NULL);
	while (*s++)
		len++;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	for (len++; len--;)
		ret[len] = *--s;
	return (ret);
}
/**
 * _strncmp - compare strings
 * @s1: first string
 * @s2: second string
 * @n: limit
 * Return: int
 */
int _strncmp(char *s1, char *s2, size_t n)
{
size_t i;
for (i = 0; i < n; ++i)
{
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
}
return (0);
}
/**
 * print_list_str - prints only the str element of a list_t linked list
 * @h: pointer to first node
 *
 * Return: size of list
 *
size_t print_list_str(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	return (i);
}
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}
*/
/**
 * _strcmp - performs lexicogarphic comparison of two strangs.
 * @s1:string
 * @s2:  string
 *
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
		return (*s1 < *s2 ? -1 : 1);
}
