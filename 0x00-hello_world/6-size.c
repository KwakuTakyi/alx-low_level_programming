#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeoff(char));
printf("Size of a int: %lu byte(s)\n", sizeoff(int));
printf("Size of a long int: %lu byte(s)\n", sizeoff(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeoff(long long int));
printf("Size of a float: %lu byte(s)\n", sizeoff(float));
return (0);

}
