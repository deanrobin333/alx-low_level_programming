#include "3-calc.h"

/**
 * get_op_func - selects the correct operator
 * @s: operator passed as argument
 *
 * Return: pointer to the function corresponding to the operator
 *
 * We have used the dereference operator `ops[i].op`.
 * if we wanted to use a pointer to the structure, change the code from `while`
 *
 * **************
 *		op_t *ptr = &ops[0];  // Pointer to the first element of the ops array.
 *		while (ptr->op != NULL && *(ptr->op) != *s)
 *		{
 *			ptr++;
 *			i++;
 *		}
 *		return ptr->f;
 * *******************
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/**
	 * ops[i].op != NULL - check if we have reached end of array
	 * ops[i].op != *s, if the providing sign, is not in the list
	 */
	/**
	 * here we have used the dereference operator - `ops[i].op`.
	 * if we wanted to use a pointer to the structuren ie `->`,
	 *		we would change the code slightly, as described above
	 */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	/**
	 * we return the function corresponding to the sign,
	 * which calls the operator functions described in `3-op_functions.c`
	 *
	 * eg: if sign is `+` ie if `i` = `+`,
	 *		we call the `op_add` function ie `ops[i].f`
	 */
	return (ops[i].f);
}
