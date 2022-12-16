#include <stdio.h>

/**
 *main-Entry
 *
 *Return: Always 0(Success)
 */

int main(void)
{
int i, j;
for (i = 97; i <= 122; i++)
	putchar(i);
for (j = 'A'; j <= 'Z'; j++)
	putchar(j);
putchar('\n');

return (0);
}
