#include "calc.h"

/**
 * get_op_func - parse which function to use
 * @s: character to be checked
 *
 * Return: return index of integer
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
	}
	return (0);
	
}
