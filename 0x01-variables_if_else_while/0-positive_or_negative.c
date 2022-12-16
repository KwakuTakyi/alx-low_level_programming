#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%li is positive", (long int)n);
else if (n < 0)
	printf("%li is negative", (long int)n);
else if (n == 0)
	printf("%li is zero", (long int)n);
return (0);
}
