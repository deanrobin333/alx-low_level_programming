#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string to reverse
 *
 * Return: void
 *
 *
 * we are reversing by exchanging the first and last letters
 *
 * length -1: characters are in index,
 *				so a length of 9, we want up to the 8th index not 9th
 *				hence, we subtract 1.
 * first - current first letter
 * last - current last letter
 *
 * letter - holds the first character
 * if we don't assign the first letter to a variable
 * when we re-write the first letter ie: s[first] = s[last]
 * we wont be able to assing the last letter.
 * if we do s[last] = s[first], it will just be the same as s[last]
 *
 * hence since letter = s[first], we can do s[last] = letter
 *
 * as first increases from 0, last reduces from the total length of string
 * if first is 0 and last is 8 - exchanges 0th index character with 8th index
 * when first becomes 1, last becomes 7 - we exchange 1st index with 7th
 * goes on until first becomes 4 and last becomes 4
 *		exchanging the 2 center numbers
 * first then becomes greater than last then the loop stops
 *		(since we used '>' and not '>=' ie 'first < last')
 */

void rev_string(char *s)
{
	char letter;
	int length, first, last;
	/**
	 * length - length of the string
	 */

	for (length = 0; s[length] != '\0'; length++)
		;
	for (first = 0, last = length - 1; first < last; first++, last--)
	{
		letter = s[first]; /*Store 1st character in letter variable*/
		s[first] = s[last]; /* copy the char from index last to index first */
		/**
		 * since now letter has the first index ie s[first]
		 * we now copy letter to s[last]
		 */
		s[last] = letter;
	}
}
