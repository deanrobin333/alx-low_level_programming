#include "3-calc.h"

/**
 * main - prints the results of a simple operations
 * @argc: count of arguments
 * @argv: array of pointerts to arguments
 *
 * Return: Always 0
 *
 *
 * Relies on 3 files - `3-calc.h`, `3-op_functions.c`, `3-get_op_func.c`
 *
 *
 * `if (get_op_func(op) == NULL || op[1] != '\0')`
 * if the operator is none of the above, print Error,
 *		and exit with the status 99.
 * `get_op_func`(3-get_op_func.c), calls the corresponding function
 *		based on operator.
 * So we check if it returns NULL, meaning not the right operator is given.
 * We also check if the string `argv[2]` has more than 1 char(not op alone)
 *		ie if the second char (1st index) is not a null character
 *
 *
 * we could have voided the `argc` in the main function, and removed
 *		`(void)argc`. it would be.
 *		`int main(int __attribute__((__unused__)) argc, char *argv[])`
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *op;

	(void)argc;

	/* if the no. of args is wrong, print Error,and exit with the status 98 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*assign the numb1, operator and numb2 to argument vectors */
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/* if the op is none of the above, print Error,& exit with the status 99.*/
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* trying to divide (/ or %) by 0, print Error,& exit with the status 100*/
	if ((*op == '/' && num2 == 0) ||
			(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* call the `get_op_func` function pointer and print the result */
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
