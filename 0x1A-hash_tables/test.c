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

    ht = hash_table_create(10);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "hetairas", "mentioner");
    hash_table_set(ht, "depravement", "serafins");
    hash_table_set(ht, "joyful", "synaphea");
    printf("start\n");
    for (i = 0; i < 10; i++)
    {
        if (ht->array[i] == NULL)
            printf("%d\t----\t\n", i);
        else
            printf("%d\t%s\t\n", i, (ht->array[i])->key);
    }
    return (EXIT_SUCCESS);
}
