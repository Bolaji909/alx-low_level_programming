#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description - prints if random number is positive, negative or zero
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
	printf("The number is positive\n", n);
}
else if (n < 0)
{
	printf("The number is negative\n", n);
}
else if (n == 0)
{
	printf("The number is zero\n", n);
}
	return (0);
}
