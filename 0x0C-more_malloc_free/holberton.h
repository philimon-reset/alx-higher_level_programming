#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int *multiply(char *num1, int len_1, char *num2, int len_2, int len_r);
void print_me(int *sum_result, int len_r);

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);
int str_len(char *str);
void *_calloc(unsigned int bytes, unsigned int size);
void add_arrays(int *mul_result, int *sum_result, int len_r);
int is_digit(char c);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
int min(unsigned int a, unsigned int b);

#endif /*HOLBERTON_H*/
