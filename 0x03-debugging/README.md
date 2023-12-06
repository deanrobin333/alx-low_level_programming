# Project 
## **0x03. C - Debugging**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. Multiple mains](#0)
	- [1. Like, comment, subscribe](#1)
	- [2. 0 > 972?](#2)
	- [](#3)
---
## Author Details
- *Dean Robin Otsyeno - deanrobin777@gmail.com*

## Project Description
- Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as `gdb` or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- A README.md file at the root of the repo, containing a description of the repository
- A README.md file, at the root of the folder of this project (i.e. `0x03-debugging`), describing what this project is about

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. Multiple mains**
- In most projects, we often give you only one main file to test with. For example, this main file is a test for a `postitive_or_negative()` function similar to the one you worked with in [an earlier C project](../0x01-variables_if_else_while/0-positive_or_negative.c "an earlier C project"):

```
carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
```

- Based on the `main.c` file above, create a file named `0-main.c`. This file must test that the function `positive_or_negative()` gives the correct output when given a case of `0`.

- You are not coding the solution / function, you’re just testing it! However, you can adapt your function from [0x01. C - Variables, if, else, while - Task #0](../0x01-variables_if_else_while/0-positive_or_negative.c "0x01. C - Variables, if, else, while - Task #0") to compile with this main file to test locally.

    - You only need to upload `0-main.c` and `main.h` for this task. We will provide our own `positive_or_negative()` function.
    - You are not allowed to add or remove lines of code, you may change only **one** line in this task.

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x03-debugging`
    - File: `0-main.c, main.h`
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. Like, comment, subscribe**
- Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
    
    - Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
    - You do not have to compile with `-Wall -Werror -Wextra -pedantic` for this task.
        
```
carrie@ubuntu:/debugging$ cat 1-main.c
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
		int i;

		printf("Infinite loop incoming :(\n");

		i = 0;

		while (i < 10)
		{
				putchar(i);
		}

		printf("Infinite loop avoided! \\o/\n");

		return (0);
}
carrie@ubuntu:/debugging$
```

- Your output should look like this:

```
carrie@ubuntu:/debugging$ gcc -std=gnu89 1-main.c -o 1-main
carrie@ubuntu:/debugging$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
carrie@ubuntu:/debugging$ wc -l 1-main.c
24 1-main.c
carrie@ubuntu:/debugging$
```


<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x03-debugging`
    - File: `1-main.c`
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. 0 > 972?**
- This program prints the largest of three integers.

```
carrie@ubuntu:/debugging$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
carrie@ubuntu:/debugging$ ./2-main
0 is the largest number
carrie@ubuntu:/debugging$
```

- ? That’s definitely not right.

- Fix the code in `2-largest_number.c` so that it correctly prints out the largest of three numbers, no matter the case.

	- Line count will not be checked for this task.

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x03-debugging`
    - File: `2-largest_number.c, main.h`
---
#### 3
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x03-debugging`
    - File: 
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
