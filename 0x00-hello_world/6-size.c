#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
char z;
int y;
long int x;
long long int w;
float v;

printf(Size of a char: %zu byte(s)\n", (size_t)sizeof(z));
printf(Size of an int: %zu byte(s)\n", (size_t)sizeof(y));
printf(Size of a long int: %zu byte(s)\n", (size_t)sizeof(x));
printf(Size of a long long int: %zu byte(s)\n", (size_t)sizeof(w));
printf(Size of a float: %zu byte(s)\n", (size_t)sizeof(v));
return (0);
}
