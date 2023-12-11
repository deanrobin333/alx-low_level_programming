#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: pointer to buffer
 * @size: bytes of buffer to print
 *
 * Return: void
 *
 * - The output should print 10 bytes per line
 * - Each line starts with the position of the first byte of the line
 *		in hexadecimal (8 chars), starting with `0`
 * - Each line shows the hexadecimal content (2 chars) of the buffer,
 *		2 bytes at a time, separated by a space
 * - Each line shows the content of the buffer. If the byte is a
 *		printable character, print the letter, if not, print `.`
 * - Each line ends with a new line `\n`
 * - If `size` is 0 or less, the output should be a new line only `\n`
 *
 *
 *
 * bytes - sets the number of bytes to print to 10
 *
 * `first_ten` is set based on the remaining bytes to print.
 * `size` is the total no. of bytes to print.
 * we want to print 10 bytes each.
 * `bytes` is first set to 0.
 *
 * if the remaining bytes is greater than 10 ie `size - bytes`
 *		then we set `first_ten` to 10 bytes.
 *		then, add 10 to `bytes`, because we will have printed 10 bytes.
 *		after printing 10 bytes we add ten
 * so we iterate in `b` up to `first_ten` - `i < first_ten`
 *
 * This goes on until bytes remaining are less than ten `size - bytes`
 * if remaining bytes is less than ten, then it is set to that number
 *		which is `size - bytes`
 */

void print_buffer(char *b, int size)
{
	int i, bytes = 0, first_ten, printing;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	/**
	 * we check if bytes to print are less than total size (total bytes).
	 * if they are not less we set `first_ten` to `10`
	 * if they are less, it means we are on the remaining bytes,
	 * so we set `first_ten` to `size - bytes`
	 *
	 * `i` will always be compared to `first_ten`
	 * but we will be printing `i + bytes`
	 *	because we are printing in batches of 10.
	 * note: bytes is increased by 10, after each print.
	 */
	for ( ; bytes < size; bytes += 10)
	{
		if (size - bytes < 10)
			first_ten = size - bytes;
		else
			first_ten = 10;

		/**
		 * print the (bytes % 10 = 0) byte no. in hexadecimal
		 * bytes will always increase by 10 until
		 * `size - bytes` is less than ten
		 * when you `08` after `%`, we are creating a padding of 8 zeros
		 */
		printf("%08x: ", bytes);

		/**
		 * we now print the hexadecimal of each printing character in twos
		 * we print the first 10, so ten hexadecimal values
		 *
		 * we do `if (i < first_ten)` so that it will keep printing,
		 * until `i` is greater than `first_ten`.
		 * `first_ten` will always be 10, until we reach the last bytes
		 *		not more than ten
		 * then `first_ten` becomes less than `i` ie `size - bytes`
		 *
		 * `i` iterates by 1 until 10.
		 *		for as long as i is less than `first_ten` it prints.
		 * when we reach the last (< 10) bytes, `first_ten`
		 *		will decrease until `i` becomes greater then `first_ten`
		 *		and then printing stops
		 *
		 * we are just printing the first ten bytes in hexadecimal
		 *		not the hexadecimal values of the printable characters.
		 * if we needed the hexadecimal representation only, we would
		 *		have: `if (b[printing] >=32 && b[printing] <=126)`
		 */

		for (i = 0; i < 10; i++)
		{
			/**
			 * `printing` - we add bytes to i, since print the first ten bytes,
			 * then the next ten bytes.
			 * `bytes` increases by ten
			 * so we need to print the `i` + 10 bytes.
			 */
			/*
			 * `%02x` ensures if the hexadecimal has one digit, 0 is added
			 * so that it always has 2 digits
			 */
			printing = i + bytes;
			if (i < first_ten)
				printf("%02x", b[printing]);
			else
				printf("  ");
			if (i % 2 != 0) /* same as `if (i % 2)` */
				printf(" ");
		}

		for (i = 0; i < first_ten; i++)
		{
			printing = i + bytes;
			/* to print characters we use the ascii representation */
			if (b[printing] >= 32 && b[printing] <= 126)
				printf("%c", b[printing]);
			else
				printf(".");
		}
		printf("\n");
	}
}
