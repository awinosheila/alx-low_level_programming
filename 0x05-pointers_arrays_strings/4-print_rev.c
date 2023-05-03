#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int shorti = 0;
	int o;

	while (*s != '\0')
	{
		shorti++;
		s++;
	i}
	s--;
	for (o = shorti; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
