#include "holberton.h"

/**
 * times_table - print multiplication table
 *
 * Return: void function
 */
void times_table(void)
{
	int j, l, a;

	for (j = 0; j < 10; j++)
	{
		for (l = 0; l < 10; l++)
		{
		    a = j * l;
		    if ((a / 10) == 0)
		    {
		        _putchar((a % 10) + '0');
		    }
		    else
		    {
    			_putchar((a / 10) + '0');
    			_putchar((a % 10) + '0');
		    }
			if (l != 9)
			{
			    _putchar(',');
			    _putchar(' ');
			    if ((a / 10) == 0)
			    {
			        _putchar(' ');
			    }
			}
		}
		_putchar('\n');
	}
}
