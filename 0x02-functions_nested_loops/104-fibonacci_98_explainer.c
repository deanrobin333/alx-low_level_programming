#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers, starting with 1 and 2
 *
 *
 * the fibonacci Sequence up to the 98
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049, 12586269025, 20365011074, 32951280099, 53316291173, 86267571272, 139583862445, 225851433717, 365435296162, 591286729879, 956722026041, 1548008755920, 2504730781961, 4052739537881, 6557470319842, 10610209857723, 17167680177565, 27777890035288, 44945570212853, 72723460248141, 117669030460994, 190392490709135, 308061521170129, 498454011879264, 806515533049393, 1304969544928657, 2111485077978050, 3416454622906707, 5527939700884757, 8944394323791464, 14472334024676221, 23416728348467685, 37889062373143906, 61305790721611591, 99194853094755497, 160500643816367088, 259695496911122585, 420196140727489673, 679891637638612258, 1100087778366101931, 1779979416004714189, 2880067194370816120, 4660046610375530309, 7540113804746346429, 12200160415121876738, 
 *
 ***********where problems begin, for the last 6 numbers************
 *
 * 19740274219868223167, 31940434634990099905, 51680708854858323072, 83621143489848422977, 135301852344706746049, 218922995834555169026
 */
/**
 * script by Dean Robin Otsyeno
 * contact: deanrobin777@gmail.com
 */
/*
 * You can use it as it is, but to view smaller numbers; Try by setting:
 *		first = 1597
 *		second 2584
 *		support = 100
 * then you can comment the first 'for loop' and 'next' variable
 *
 * why are we splitting?
 * from the 1st to the 92, number it prints well.
 *		technically 'unsigned long next' handles 90 numbers,
 *		since the first and second are hardcorded.
 *
 * we need the 93rd to the 98th number.
 *
 * we get this by splitting the first and second into
 *		high (f1 and s1) and
 *		low (f2 and s2) parts using the support constant (1,000,000,000).
 *
 * then we print them using: "for (i = 92; i <= 98; ++i)
 *		by doing ++i, we dont print the 92nd value
 *		we then print the 93rd to the 98th value.
 * ofcourse you can loop as you wish, provided you print the next 6 values
 */

int main(void)
{
	int i, preview;
	unsigned long first = 1, second = 2, support = 1000000000;
	unsigned long next = 0;
	unsigned long f1, f2, s1, s2;

	for (i = 0; i <= 90; i++)
	{
		if (i <= 1)
			next = i + 1;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		if (i < 90)
			printf("%lu, ", next);
		else
			printf("%lu", next);
	}

	printf("\n\n*********************************************************\n");
	printf("The magic begins\n");
	printf("first: %lu\n", first);
	printf("Second: %lu\n", second);
	printf("Support is: %lu\n", support);
	if (support == 1000000000)
		printf(" -ie 1 billion\n");
	else if (support == 1000000)
		printf(" -ie 1 million\n");
	else if (support == 100000)
		printf(" -ie 100 thousand\n");
	else if (support == 10000)
		printf(" -ie 10 thousand\n");
	else if (support == 1000)
		printf(" -ie a thousand\n");
	else if (support == 100)
		printf(" -ie a hundred\n");
	f1 = (first / support);
	f2 = (first % support);
	s1 = (second / support);
	s2 = (second % support);
	printf("Now we loop\n\n\n");

	preview = 3;
	/**
	 * preview determines how many examples you want
	 * but note, to print up to the 98 fib number
	 * you would need to iterate 6 times
	 * so in the for loop below; you would set i = 92 and i <=98
	 */

	for (i = 1; i <= preview; ++i)
	{
		if ((f1 != first / 100) && (f2 != first % 100))
		{
			printf("New first Numb: %lu%lu = previous *complete s* no.\n", f1 + (f2 / support), f2 % support);
			printf("- Previous *complete s* is what the previous first number was\n");
			printf("- Previous number was made of 2 parts, like the new second number\n");
			printf("- which is: (f1 + (f2 / support)) && (f2 %% support)\n");
			printf("New Second Numb: %lu%lu = made of the combination of part1 and part 2 of *s*.\n", s1 + (s2 / support), s2 % support);
			printf("- which is (s1 + (s2 / support)) && (s2 %% support)\n\n");
			printf("Hence: New Numbers\n");
			printf("------------\n");
			printf("New first Numb: %lu%lu\n", f1 + (f2 / support), f2 % support);
			printf("New Second Numb: %lu%lu\n", s1 + (s2 / support), s2 % support);
			printf("Support is always: %lu\n\n", support);
		}
		printf("Current values\n");
		printf("------------------\n");
		printf("f1:%lu = %lu%lu / %lu\n", f1 + (f2 / support) , f1 + (f2 / support), f2 % support, support);
		printf("f2:%lu = %lu%lu %% %lu\n", f2 % support, f1 + (f2 / support), f2 % support, support);
		printf("s1:%lu = %lu%lu / %lu\n", s1 + (s2 / support), s1 + (s2 / support), s2 % support, support);
		printf("s2:%lu = %lu%lu %% %lu\n\n", s2 % support, s1 + (s2 / support), s2 % support, support);

		printf("Next values\n");	
		printf("----------------\n");
		s1 = s1 + f1;
		printf("s1:%lu = s1 + f1\n", s1);
		printf("- Next number is addition of first and second\n");
		printf("- so *s1* becomes addition of previous first and second\n");
		printf("- but previous of the *division* */* part\n\n");

		f1 = s1 - f1;
		printf("f1:%lu = s1 - f1\n", f1);
		printf("- 1st no. *f1* now becomes the previous 2nd no. *s1*.\n");
		printf("- Previous 2nd no. is the new *s1* no. minus current (old) *f1* no.\n");
		printf("- but previous of the *division* */* part\n\n");

		printf("same thing as *s1* and *f1*, but now the *modulus* *%%* part\n");
		s2 = s2 + f2;
		printf("s2:%lu = s2 + f2\n", s2);

		f2 = s2 - f2;
		printf("f2:%lu = s2 - f2\n\n\n", f2);

		printf("Now full numbers\n");
		printf("--------------------\n");
		printf("We have gotten the next number represented in split by\n");
		printf("*s1*:%ld && *s2*:%ld\n\n", s1, s2);
		printf("To get the full number we have to join them\n");
		printf("- if the full number (ie previous no.) **WAS** %lu%lu\n", s1 + (s2 / support), s2 % support);
		printf("- On earlier splitting to get *s1* and *s2*, we did division and modulus; ie\n");
		printf("  - s1:%lu = %lu%lu / %lu\n", s1 + (s2 / support), s1 + (s2 / support), s2 % support, support);
		printf("  - s2:%lu = %lu%lu %% %lu\n", s2 % support, s1 + (s2 / support), s2 % support, support);
		printf("\n");
		printf("if now *s1* is:%ld && *s2* is:%ld\n", s1, s2);
		printf("- To join them we need to get two parts\n");
		printf("  - Part 1 which was before division by %ld\n", support);
		printf("  - Part 2 which was before modulus by %ld\n", support);
		printf("- Part 1 will be -- *s1*: %ld + what remained when we divided\n", s1 + (s2 / support));
		printf("- Part 2 will be -- the modulus of *s2*\n");
		printf("- We then put these 2 parts together, by printing them individually\n");
		printf("\n\n");
		printf("Next part1: %lu\n", s1 + (s2 / support));
		printf(" -part1 = s1 + (s2 / support) ==ie %lu + (%lu / %lu)\n\n", s1, s2, support);
		printf("Next part2: %lu\n", s2 % support);
		printf(" -part2 = s2 %% support ==ie %lu %% %lu)\n\n", s2, support);
		printf("Now Together: ");
		printf("%lu", s1 + (s2 / support));
		printf("%lu\n", s2 % support);
		printf("----------------------");
		printf("\n_________________________________________________________________");
		printf("\n\n\n");
	}

	return (0);
}
