#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int contrary = 0;
	int i;

	while (s[contrary] != '\0')
	contrary++;
	for (i = 0; i < contrary; i++)
	{
		contrary--;
		rev = s[i];
		s[i] = s[contrary];
		s[contrary] = rev;
	}
}
