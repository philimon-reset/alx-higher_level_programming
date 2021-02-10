#include <stdio.h>
/**
 * main - print the first 50 fibonacci characters
 *
 * Return: 0 if success
 */
int main(void)
{
	unsigned int c;
	unsigned long a = 0, b = 1, fibonacci;

	for (c = 1; c < 99; c++)
	{
		fibonacci = a + b;
		if (c < 98)
		{
			printf("%lud, ", fibonacci);
		}
		else
		{
			printf("%lud", fibonacci);
		}
		a = b;
		b = fibonacci;
	}
	printf("\n");
	return (0);
}
