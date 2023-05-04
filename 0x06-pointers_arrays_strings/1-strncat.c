#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int r;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	r = 0;
	while (r < n && src[r] != '\0')
	{
	dest[p] = src[r];
	p++;
	r++;
	}
	dest[p] = '\0';
	return (dest);
}
