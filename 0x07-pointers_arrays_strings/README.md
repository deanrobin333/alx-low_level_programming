# Project 
## **0x07. C - Even more pointers, arrays and strings**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. memset](#0)
	- [1. memcpy](#1)
	- [2. strchr](#2)
	- [3. strspn](#3)
	- [4. strpbrk](#4)
	- [5. strstr](#5)
	- [6. Chess is mental torture](#6)
	- [7. The line of life is a ragged diagonal between duty and desire](#7)
	- [](#8)
	- [](#9)
---
## Author Details
- *Dean Robin Otsyeno - deanrobin777@gmail.com*

## Project Description
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [\_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c "_putchar")
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. memset**
- Write a function that fills memory with a constant byte.

    - Prototype: `char *_memset(char *s, char b, unsigned int n);`
    - The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
    - Returns a pointer to the memory area `s`

- FYI: The standard library provides a similar function: `memset`. Run `man memset` to learn more


```
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
julien@ubuntu:~/0x07$ ./0-memset
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [`0-memset.c`](./0-memset.c)
	- Example file: [`0-main.c`](./0-main.c)
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. memcpy**
- Write a function that copies memory area.

    - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
    - The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
    - Returns a pointer to `dest`

- FYI: The standard library provides a similar function: `memcpy`. Run `man memcpy` to learn more.


```
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
julien@ubuntu:~/0x07$ ./1-memcpy
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05 0x07 0x07 0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [`1-memcpy.c`](./1-memcpy.c)
	- Example file: [`1-main.c`](./1-main.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. strchr**
- Write a function that locates a character in a string.

    - Prototype: `char *_strchr(char *s, char c);`
    - Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

- FYI: The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.


```
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
julien@ubuntu:~/0x07$ ./2-strchr
llo
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [`2-strchr.c`](./2-strchr.c)
	- Example file: [`2-main.c`](./2-main.c)
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. strspn**
- Write a function that gets the length of a prefix substring.

    - Prototype: `unsigned int _strspn(char *s, char *accept);`
    - Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`

- FYI: The standard library provides a similar function: `strspn`. Run `man strspn` to learn more.

```
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
julien@ubuntu:~/0x07$ ./3-strspn
5
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [`3-strspn.c`](./3-strspn.c)
	- Example file: [`3-main.c`](./3-main.c)
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. strpbrk**
- Write a function that searches a string for any of a set of bytes.

    - Prototype: `char *_strpbrk(char *s, char *accept);`
    - The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
    - Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

    FYI: The standard library provides a similar function: `strpbrk`. Run `man strpbrk` to learn more.


```
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
julien@ubuntu:~/0x07$ ./4-strpbrk
llo, world
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [`4-strpbrk.c`](./4-strpbrk.c)
	- Example file: [`4-main.c`](./4-main.c)
---
#### 5
###### [Table of Contents](#table-of-contents)
**5. strstr**
- Write a function that locates a substring.

    - Prototype: `char *_strstr(char *haystack, char *needle);`
    - The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared
    - Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

- FYI: The standard library provides a similar function: `strstr`. Run `man strstr` to learn more.


```
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
julien@ubuntu:~/0x07$ ./5-strstr
world
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [`5-strstr.c`](./5-strstr.c)
	- Example file: [`5-main.c`](./5-main.c)
---
#### 6
###### [Table of Contents](#table-of-contents)
**6. Chess is mental torture**
- Write a function that prints the chessboard.

    - Prototype: `void print_chessboard(char (*a)[8]);`

```
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
julien@ubuntu:~/0x07$ ./7-print_chessboard
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [``](./)
	- Example file: [`7-main.c`](./7-main.c)
---
#### 7
###### [Table of Contents](#table-of-contents)
**7. The line of life is a ragged diagonal between duty and desire**
- Write a function that prints the sum of the two diagonals of a square matrix of integers.

    - Prototype: `void print_diagsums(int *a, int size);`
    - Format: see example
    - You are allowed to use the standard library

- Note that in the following example we are casting an `int[][]` into an `int*`. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.


```
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums
113, 1016
1214556093, 1137318
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [`8-print_diagsums.c`](./8-print_diagsums.c)
	- Example file: [`8-main.c`](./8-main.c)
---
#### 8
###### [Table of Contents](#table-of-contents)
**8. Double pointer, double fun**
- Write a function that sets the value of a pointer to a char.
    
    - Prototype: `void set_string(char **s, char *to);`

```
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string
julien@ubuntu:~/0x07$ ./100-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [`100-set_string.c`](./100-set_string.c)
	- Example file: [`100-main.c`](./100-main.c)
---
#### 9
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x07-pointers_arrays_strings`
    - File: [``](./)
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
