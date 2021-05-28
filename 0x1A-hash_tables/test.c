#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int i;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "hetairas", "mentioner");
    hash_table_set(ht, "depravement", "serafins");
    hash_table_set(ht, "joyful", "synaphea");
    printf("start\n");
    for (i = 0; i < 1024; i++)
    {
        if (ht->array[i] == NULL)
            printf("%d\t----\t", i);
        else;
            printf("%d\t%s----\t", i, ht->array[i]);
    return (EXIT_SUCCESS);
}
