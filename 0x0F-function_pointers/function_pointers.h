#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>


void print_name(char *name, void (*f)(char *));
int checker(char *c);

#endif /*FUNCTION_POINTERS_H*/
