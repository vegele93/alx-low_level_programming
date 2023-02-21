#include <stdio.h>

/**
 *  main - Prints the first 98 Fibonacci numbers
 *
 *  Return: Always 0.
 */

int main(void)
{

	long n1 = 1, n2 = 2, fn;

	printf("%ld, %ld", n1, n2);

	for (int c = 0; c < 96; c++)
	{
	fn = n1 + n2;
	printf(", %ld", fn);
	n1 = n2;
	n2 = fn;
	}

	printf("\n");
	return (0);
}
