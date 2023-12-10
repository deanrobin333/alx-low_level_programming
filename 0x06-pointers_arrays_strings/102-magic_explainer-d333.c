#include <stdio.h>
/**
 * Project: 0x06. C - More pointers, arrays and strings
 * Link to project: https://github.com/deanrobin333/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/102-magic.c
 * Que: 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work
 */

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  p[5] = 98;
  /* ...so that this prints 98\n */
  /* printf("a[2] = %d\n", a[2]); */
  printf("- We shall print the memory address\n");
  printf("Explained by Dean Robin Otsyeno; deanrobin777@gmail.com\n");
  printf("- We are using long unsigned int to represent the memory addresses as normal numbers instead of the hexadecimal format\n");

  printf("- this is the order the variables are declared\nint n;\nint a[5];\nint *p;\na[2] = 1024;\np = &n;\n");
  printf("________________________________________________\n");
  printf("Take note\n  -An integer takes 4 bytes in memory\n  -A pointer takes 8 bytes.\n  -An array takes (n * size_of_data_type),\n   -where n is the size of the array\n   -if the array is an integer, size of data_type will be 4.\n   -Hence the array 'a', takes (5 * 4) = 20 bytes in memory)\n");
  printf("_________________________________________________\n");
  printf("We will use the last 3 digits of the memory address to visualize how this works\n");
  printf("-----------------\n");

  printf("n = %lu\n", (long unsigned int)&n);
  printf("-----------------\n");
  printf("	-`n` is the first one to be declared\n");
  printf("	-`n`: is at %lu\n\n", ((long unsigned int)&n % 1000));

  printf("p = %lu\n", (long unsigned int)&p);
  printf("-----------------\n");
  printf("	-pointers also have their own memory addresses\n");
  printf("	-the assignment `p = &n` makes the memory address of\n	  -the pointer `p` lower than that of the array `a`.\n");
  printf("	  -HOWEVER, the order in which variables are laid out in memory is determined by\n	    -the compiler,\n	    -the system's memory alignment requirements and\n	    -optimization\n");
  printf("	-hence the memory address of `p` will be 4 bytes after `n`,\n");
  printf("	-and `p` will take up the next 8 bytes in memory since its a pointer.\n");
  printf("	-`p`: is at %lu\n\n", ((long unsigned int)&p % 1000));

  printf("p + 0 = %lu\n", (long unsigned int)&p[0]);
  printf("-----------------\n");
  printf("	-`*p` is the same as `*(p + 0)` or `p[0]`\n");
  printf("	-the pointer p points to the memory address of n;\n	-hence `*p` or `*(p + 0)` or `p[0]` will have the same memory address as n\n");
  printf("	-`*p` or `*(p + 0)` or `p[0]`: is at %lu.\n\n", ((long unsigned int)&p[0] % 1000));

  printf("a = %lu\n", (long unsigned int)&a);
  printf("-----------------\n");
  printf("	-Now, `a` gets assigned memory after `p`.\n");
  printf("	-Remember: the assignment `p = &n` makes the memory address of\n	  -`a` higher than that of the pointer `p`.\n");
  printf("	-Hence array `a`, will be 8 bytes after `p`.\n");
  printf("	-if `p` = %lu, hence `a` will be %lu + 8.\n", ((long unsigned int)&p % 1000), ((long unsigned int)&p % 1000));
  printf("	-`a`: is at %lu.\n", ((long unsigned int)&a % 1000));
  printf("	-and the size of the array `a` = (5 * size of data_type) = %lu bytes.\n\n\n", sizeof(a));

  printf("------------------------------------------------------\n");
  printf("WHERE THE MAGIC HAPPENS!\n");
  printf("------------------------------------------------------\n");
  printf("If this explantion doesnt make sense, the examples after will.\n");
  printf("- the elements of `a` will be 4 bytes after each index.\n");
  printf("  - if `a` is: %lu, `a[0]` is obviously `a`; hence: `a[1]` = (`a[0]`)%lu + %d = %lu.\n", ((long unsigned int)&a % 1000), ((long unsigned int)&a % 1000), 4, ((long unsigned int)&a[1] % 1000)); 
  printf("  - hence: `a[0]` = %lu and `a[1]` = %lu.\n\n", ((long unsigned int)&a[0] % 1000), ((long unsigned int)&a[1] % 1000));
  printf("- `*(p + 0)`, points to address of `n`.\n");
  printf("- since n is not an array, assignment of `p` by `n` ends at `*(p + 0)`\n");
  printf("- hence any dereference of `*p` greater than `0` eg `*(p + 1)`, will point to the next memory address.\n");
  printf("- since the pointer `p` is of integer data type, memory increment will be by 4 bytes\n");
  printf("- Hence `*(p + 1)` will be 4 bytes after `*(p + 0)`,\n");
  printf("  - Where `*(p + 0)` is the memory address of `n`.\n");
  printf("  -if `*(p + 0)` which is `&n` is: %lu, `*(p + 1)` will be: %lu\n\n\n", ((long unsigned int)&p[0] % 1000), ((long unsigned int)&p[1] % 1000));


  printf("------------------------------------------------------\n");
  printf("Examples: continuation\n");
  printf("------------------------------------------------------\n");

  printf("- NOW FOR POINTER `p`\n");
  printf("-----------------\n");
  printf("Explained by Dean Robin Otsyeno; deanrobin777@gmail.com\n");
  printf("- Remember it's only `*(p + 0)` that is assigned by `&n`;\n");
  printf("  -the rest eg `*(p + 1)`, just points to the next memory address,\n");
  printf("  -which is 4 bytes after, since the pointer `p` is of integer type\n\n");


  printf("p + 1 = %lu\n", (long unsigned int)&p[1]);
  printf("-----------------\n");
  printf("	-if `*(p + 0)` is: %lu, `*(p + 1)` is 4 bytes after ie: %lu\n", ((long unsigned int)&p[0] % 1000), ((long unsigned int)&p[1] % 1000));
  printf("	-Remember: `*p = &n`, makes `*p` or `*(p + 0)` same as addres of `n`.\n");
  printf("	  -Hence if `&n` is: %lu, `*p` or `*(p + 0)` is the same ie: %lu\n", ((long unsigned int)&n % 1000), ((long unsigned int)&p[0] % 1000));
  printf("	-`*(p + 1)` or `p[1]`: is at %lu\n\n", ((long unsigned int)&p[1] % 1000));


  printf("p + 2 = %lu\n", (long unsigned int)&p[2]);
  printf("-----------------\n");
  printf("	-`*(p + 2)` is (2 * 4 + `*(p + 0)`) -ie (8 + %lu)\n", ((long unsigned int)&p[0] % 1000));
  printf("	-`*(p + 2)` or `p[2]`: is at %lu\n\n", ((long unsigned int)&p[2] % 1000));

  printf("p + 3 = %lu\n", (long unsigned int)&p[3]);
  printf("-----------------\n");
  printf("	-`*(p + 3)` is (3 * 4 + `*(p + 0)`) -ie (12 + %lu)\n", ((long unsigned int)&p[0] % 1000));
  printf("	-`*(p + 3)` or `p[3]`: is at %lu\n\n", ((long unsigned int)&p[3] % 1000));

  printf("p + 4 = %lu\n", (long unsigned int)&p[4]);
  printf("-----------------\n");
  printf("	-`*(p + 4)` is (4 * 4 + `*(p + 0)`) -ie (16 + %lu)\n", ((long unsigned int)&p[0] % 1000));
  printf("	-`*(p + 4)` or `p[4]`: is at %lu\n\n\n", ((long unsigned int)&p[4] % 1000));


  printf("- NOW FOR ARRAY `a`!!!\n");
  printf("-----------------\n");
  printf("Remember\n");
  printf("- The array `a` has a memory address higher than the pointer `p`,\n");
  printf("  -because of the assignment `p = &n`.\n");
  printf("- so if `p` is %lu, then `a` is 8 bytes after`p` ie %lu.\n\n", (long unsigned int)&p % 1000, (long unsigned int)&a % 1000);
  printf("- but `*(p + 0)` which is the same as `*p` is assigned to `&n` and there after no assignment of `p`.\n");
  printf("  - Hence if *(p + 0) is %lu, `*(p + 1)` will be an increment of 4 bytes ie: %lu\n\n", (long unsigned int)&p[0] % 1000, (long unsigned int)&p[1] % 1000); 
  printf("- since `n` is 4 bytes, and `*(p + 0)` is `&n`, and `p` increments by 4 bytes,\n");
  printf("  - then the next 4 bytes in memory after `&n`, points to the memory address of the pointer `p` itself.\n");
  printf("- Hence if `p` increments by 4 bytes, the next 4 bytes from `&n`,\n");
  printf("  - where `&n` is the same as `*(p + 0)` is `*(p + 1)`,\n");
  printf("  - making `*(p + 1)` the memory address of the pointer `p` itself -ie %lu.\n\n", (long unsigned int)&p % 1000);

  printf("- So if `*(p + 1)` ie [[%lu]], is the address of the pointer `p` itself,\n",(long unsigned int)&p % 1000);
  printf("  - and we have seen `a` is 8 bytes after `p`.\n");
  printf("  - it means `a` which is the same as `a[0]` is 8 bytes after `*(p + 1)`\n");
  printf("  - Since `p` increments by 4 bytes, 8 bytes from `*(p + 1)` is `*(p + 3)`,\n");
  printf("  - making `a[0]` same as `*(p + 3)`\n\n");
  

  printf("-----------------\n");
  printf("TO SUM IT ALL UP\n");
  printf("-----------------\n");
  printf("- if `&n` same as `*(p + 0)` is: [[%lu]]; then `&p` same as `*(p + 1)` is: [[%lu]].\n\n", (long unsigned int)&n % 1000, (long unsigned int)&p % 1000);
  printf("- Hence `a` same as `a[0]` is: [[%lu]]\n", (long unsigned int)&a % 1000);
  printf("  - which is 8 bytes from `*(p + 1)`:[[%lu]] --ie-- `a[0]` is `*(p + 3)`: [[%lu]].\n\n", (long unsigned int)&p[1] % 1000, (long unsigned int)&p[3] % 1000);
  printf("- So any increment of `*(p + 3)` by 1, increments by 4 bytes, pointing to the next element of `a`\n");
  printf("  - `a[1]`:[[%lu]] is `*(p + 4)`:[[%lu]];\n", (long unsigned int)&a[1] % 1000, (long unsigned int)&p[4] % 1000);
  printf("  - `a[2]`:[[%lu]] is `*(p + 5)`:[[%lu]]\n\n", (long unsigned int)&a[2] % 1000, (long unsigned int)&p[5] % 1000);
  printf("- It goes on until `a[5]`:[[%lu]], the last element of array `a` which is `*(p + 8)`: [[%lu]].\n", (long unsigned int)&a[5] % 1000, (long unsigned int)&p[8] % 1000);
  printf("- from then any increments after `*(p + 8)` point to something else.\n\n\n"); 


  printf("a[0] = %lu\n", (long unsigned int)&a[0]);
  printf("-----------------\n");
  printf("	-`a[0]` is the same as `a` = [[%lu]] and `*(p + 3) = [[%lu]].\n", (long unsigned int)&a % 1000, (long unsigned int)&p[3] % 1000);
  printf("	-`a[0]`: is at %lu\n\n", ((long unsigned int)&a[0] % 1000));

  printf("a[1] = %lu\n", (long unsigned int)&a[1]);
  printf("-----------------\n");
  printf("	-`a[1]` is the same as `*(p + 4) = [[%lu]].\n", (long unsigned int)&p[4] % 1000);
  printf("	-`a[1]`: is at %lu\n\n", ((long unsigned int)&a[1] % 1000));

  printf("a[2] = %lu\n", (long unsigned int)&a[2]);
  printf("-----------------\n");
  printf("	-`a[2]` is the same as `*(p + 5) = [[%lu]].\n", (long unsigned int)&p[5] % 1000);
  printf("	-`a[2]`: is at %lu\n\n", ((long unsigned int)&a[2] % 1000));

  /*printf("Values\n");
  printf("a[1] = %d\n", a[1]);
  printf("a[2] = %d\n", a[2]);
  printf("a[3] = %d\n", a[3]);
  printf("a[4] = %d\n", a[4]);
  printf("a[5] = %d\n", a[5]); */

  printf("Hope you now understand how memory allocation works.\nThe data type determines how much memory is allocated and how many bytes are added by each increment of 1\n");
  printf("Explained by Dean Robin Otsyeno; deanrobin777@gmail.com\n\n");

  printf("Result of: 'printf(\"a[2] = %%d\\n\", a[2]);'\n");
  printf("a[2] = %d\n", a[2]);

  return (0);
}
