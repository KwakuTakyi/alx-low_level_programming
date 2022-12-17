#include <stdio.h>

/**
 * main-Entry
 *
 * Return: Always 0(Success)
 */

int main(void)
{
int i, a;

for (i = '0', a = 0; i <= '9'; i++)
{
/*	putchar((a/100) + i);*/
	putchar(i);
}
putchar('\n');
return (0);
}
