#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int number;

printf("Hello PLD!\n");
for (number = 1 ; number <= 10 ; ++number)
{
	printf("Tour %d\n", number);
}
while (number <= 20)
{
	printf("Tour %d\n", number);
	number++;
}
multiply(35, 57);
return (0);
}
