#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

#define DEC(x) (((n & 1) == 0) ? ('0') : ('1'))
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int _strlen(const char *s);
void print_binary(unsigned long int n);

#endif /*HOLBERTON_H*/
