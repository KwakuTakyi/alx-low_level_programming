#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
fprintf(stderr, "Size of a char: %li byte(s) \n", (unsigned long)sizeof(a));
fprintf(stderr, "Size of a int: %li byte(s)\n", (unsigned long)sizeof(b));
fprintf(stderr, "Size of a long int: %li byte(s)\n", (unsigned long)sizeof(c));
fprintf(stderr, "Size of a long long int: %li byte(s)\n", (unsigned long)sizeof(d));
fprintf(stderr, "Size of a float: %li byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
