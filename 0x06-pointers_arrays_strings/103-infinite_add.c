#include "main.h"

void rev_string(char *result);

/**
 * infinite_add - adds two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: buffer that function will store result
 * @size_r: buffer size
 *
 * Return: the result
 *			or 0, if result can not be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size_n1, size_n2 = 0, overflow = 0;
	int val_n1, val_n2, temp_total;
	int index_r = 0;

	/**
	 * we counted size of n1 and n2 by
	 * a for loop first
	 * then a while loop. (size_n2) must be initialized to 0
	 * just to show how to use both
	 */

	for (size_n1 = 0; n1[size_n1] != '\0'; size_n1++)
		;
	while (n2[size_n2] != '\0')
		size_n2++;
	/**
	 * we must subtract 1 from size_n1 and size_n2
	 * because this counts the number of elements
	 * and index starts from zero, so the index of the last element will be
	 * at the (total_elements -1) index.
	 */
	size_n1--;
	size_n2--;

	/*if there more elements than can fit in r we return 0 */
	if (size_n1 >= size_r || size_n2 >= size_r)
		return (0);

	for (; size_n1 >= 0 || size_n2 >= 0 || overflow == 1; size_n1--, size_n2--)
	{
		/**
		 * assign least significant digit (right most) to do addition
		 * make sure we set values to zero, once the loop reaches 0
		 */
		if (size_n1 < 0)
			val_n1 = 0;
		else
			val_n1 = n1[size_n1] - '0'; /* subtract 0 to change char to numb */
		if (size_n2 < 0)
			val_n2 = 0;
		else
			val_n2 = n2[size_n2] - '0';

		temp_total = val_n1 + val_n2 + overflow;
		/**
		 * on first iteration overflow is 0
		 * then check if temp_total is >= 10, so that we set overflow to 1
		 */

		if (temp_total >= 10)
			overflow = 1;
		else
			overflow = 0;
		/**
		 * assign the sum (tem_total) to r
		 * this assigns the least significat digit to most significant of r
		 * hence we will have to reverse r
		 *
		 * we must reserve last byte of r for '\0' and check for overflow
		 * If adding the next digit would make the buffer to be full, returns 0
		 * so as we iterate index_r, we make sure its less than size_r - 1
		 * r[index_r] will stop looping once the for loop is satisfied
		 */

		if (index_r >= (size_r - 1))
			return (0);
		r[index_r] = (temp_total % 10) + '0';
		index_r++;
	}
	/**
	 * we then  do another check to make sure last byte is free
	 * make sure the results is not equal to the whole size_r
	 * so that we have space left for the null byte
	 * the last iteration of index_r must be the null byte
	 */
	if (index_r == size_r)
		return (0);
	/* we must assign the null character as char arrays must end in '\0' */
	/* also the null character will help when reversing r */
	r[index_r] = '\0';

	rev_string(r);
	return (r);
}

/**
 * rev_string - reverses the r string
 * @result: pointer to the r string
 *
 * r string is assigned values in reverse, hence we must reverse the values
 *
 * Return: void
 */

void rev_string(char *result)
{
	char letter;
	int first, last;

	for (last = 0; result[last] != '\0'; last++)
		;
	/**
	 * last represents total number of elements
	 * we have to subtract 1, as the last element is at index (last -1)
	 */

	last--;

	for (first = 0; first < last ; first++, last--)
	{
		letter = result[first];
		result[first] = result[last];
		result[last] = letter;
	}
}
