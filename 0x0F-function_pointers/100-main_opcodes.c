#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 *
 * Opcodes (Operation Codes) are the machine-level instructions
 *		that tell a computer's CPU to perform specific operations, such as
 *			adding two numbers or moving data between memory locations.
 *		Each operation or instruction that a CPU can execute
 *			has a corresponding opcode.
 *
 *
 * you run the program ( ./main) followed by a number that indicates
 *		how many bytes of its own opcodes you want to display.
 * The program aims to determine how many bytes of
 *		its own machine code (opcodes) to display.
 *
 *
 *
 * on compiling we only use `gcc -std=gnu89`; as if we use
 * `-Wall -pedantic -Werror -Wextra`, it will not compile because `ISO` forbids
 *		- conversion of function pointer to object pointer
 *				`arr = (char *)main;`
 *		- does not support the ‘hh’ gnu_printf length modifier
 *				`printf("%02hhx\n", arr[i]);`
 */

int main(int argc, char *argv[])
{
	int size, i;
	char *arr;

	/* If the # of args is wromg, print Error, and exit with the status 1 */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]); /*convert the # provided to an integer */
	/* If the # of bytes is negative, print Error, and exit with the status 2*/
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/**
	 * address of the main function is cast to a character pointer ( char *).
	 * essentially treating main function's address as a sequence of bytes.
	 */
	arr = (char *)main;

	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			/**
			 * The `hh` prefix indicates that the argument should be treated as
			 * a signed char or unsigned char and converted to a hexadecimal.
			 * This specifier is useful when working with single-byte data types
			 *	(like char) and you want to print them in hexadecimal format.
			 */
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

