#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int size;
	int i;
	char *arr;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	size = atoi(argv[1]);


	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}


	arr = (char *)main;


	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

