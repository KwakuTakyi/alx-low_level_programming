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
printf("Size of a char: %li byte(s) \n", sizeof(a));
printf("Size of a int: %li byte(s)\n", sizeof(b));
printf("Size of a long int: %li byte(s)\n", sizeof(c));
printf("Size of a long long int: %li byte(s)\n", sizeof(d));
printf("Size of a float: %li byte(s)\n", sizeof(e));
return (0);
}
