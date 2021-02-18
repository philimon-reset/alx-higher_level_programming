#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
void swap_int(int *a, int *b);
char *string_toupper(char *s);
char *cap_string(char *s);
char *rot13(char *s);
char *leet(char *s);
int is_separator(char c);
#endif /*HOLBERTON_H*/
