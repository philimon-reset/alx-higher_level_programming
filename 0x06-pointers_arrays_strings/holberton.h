#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

int _putchar(char c);
int _strlen(char *s);
void swap_char(char *a, char *b);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
void swap_int(int *a, int *b);
char *string_toupper(char *);
char *cap_string(char *);
int is_separator(char c);
char transform(char x);
char *leet(char *);
char transform_2(char x);
char *rot13(char*);
void print_number(int n);
#endif /*HOLBERTON_H*/
