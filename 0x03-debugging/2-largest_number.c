/**
 * @a: first integer
 * @b: secound integer
 * @c: third integer
 * main - prints the largest of 3 integers
 * Return: 0
 */

int largest(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= c && b >= a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
