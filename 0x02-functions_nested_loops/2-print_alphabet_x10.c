B#include "holberton.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: null
 */
void print_alphabet_x10(void);
{
	char l;
	int j;
	
	
	j = 0;
	while (j <= 10)
{
    l = 'a';
    _putchar('\n');
	    while (l <= 'z')
    {
		    _putchar(l); 
		    l++;
	
    }
	j++;
}
}
