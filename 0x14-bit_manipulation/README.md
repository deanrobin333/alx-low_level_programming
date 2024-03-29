# Project 
## **0x14. C - Bit manipulation**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. 0](#0)
	- [1. 1](#1)
	- [2. 10](#2)
	- [3. 11](#3)
	- [4. 100](#4)
	- [5. 101](#5)
	- [6. Endianness](#6)
	- [7. Crackme3](#7)
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
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [\_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c "_putchar")
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. 0**
- Write a function that converts a binary number to an `unsigned int`.

    - Prototype: `unsigned int binary_to_uint(const char *b);`
    - where `b` is pointing to a string of `0` and `1` chars
    - Return: the converted number, or 0 if
        - there is one or more chars in the string `b` that is not `0` or `1`
        - `b` is `` `NULL` ``

```
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a
1
5
0
98
402
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x14-bit_manipulation`
    - File: [`0-binary_to_uint.c`](./0-binary_to_uint.c)
	- Example file: [`0-main.c`](./0-main.c)
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. 1**
- Write a function that prints the binary representation of a number.
    
    - Prototype: `void print_binary(unsigned long int n);`
    - Format: see example
    - You are not allowed to use arrays
    - You are not allowed to use `malloc`
    - You are not allowed to use the `%` or `/` operators

```
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001
1111111111111111111111111111111111111111111111111111111111111111
1101111000110101000001100100001000101000
```
<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x14-bit_manipulation`
    - File: [`1-print_binary.c`](./1-print_binary.c)
	- Example file: [`1-main.c`](./1-main.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. 10**
- Write a function that returns the value of a bit at a given index.

    - Prototype: `int get_bit(unsigned long int n, unsigned int index);`
    - where `index` is the index, starting from `0` of the bit you want to get
    - Returns: the value of the bit at index `index` or `-1` if an error occured

```
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c
julien@ubuntu:~/0x14. Binary$ ./c
1
1
0
-1
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x14-bit_manipulation`
    - File: [`2-get_bit.c`](./2-get_bit.c)
	- Example file: [`2-main.c`](./2-main.c)
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. 11**
- Write a function that sets the value of a bit to `1` at a given index.
    
    - Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
    - where `index` is the index, starting from `0` of the bit you want to set
    - Returns: `1` if it worked, or `-1` if an error occurred

```
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/0x14. Binary$ ./d
1056
1024
99
1050624
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x14-bit_manipulation`
    - File: [`3-set_bit.c`](./3-set_bit.c)
	- Example file: [`3-main.c`](./3-main.c)
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. 100**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x14-bit_manipulation`
    - File: [`4-clear_bit.c`](./4-clear_bit.c)
	- Example file: [`4-main.c`](./4-main.c)
---
#### 5
###### [Table of Contents](#table-of-contents)
**5. 101**
- Write a function that returns the number of bits you would need to flip to get from one number to another.

    - Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
    - You are not allowed to use the `%` or `/` operators

```
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/0x14. Binary$ ./f
2
5
3
1
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x14-bit_manipulation`
    - File: [`5-flip_bits.c`](./5-flip_bits.c)
	- Example file: [`5-main.c`](./5-main.c)
---
#### 6
###### [Table of Contents](#table-of-contents)
**6. Endianness**
- Write a function that checks the endianness.

    - Prototype: `int get_endianness(void);`
    - Returns: `0` if big endian, `1` if little endian

```
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h
julien@ubuntu:~/0x14. Binary$ ./h
Little Endian
julien@ubuntu:~/0x14. Binary$ lscpu | head
Architecture:          x86_64
CPU op-mode(s):        32-bit, 64-bit
Byte Order:            Little Endian
CPU(s):                1
On-line CPU(s) list:   0
Thread(s) per core:    1
Core(s) per socket:    1
Socket(s):             1
NUMA node(s):          1
Vendor ID:             GenuineIntel
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x14-bit_manipulation`
    - File: [`100-get_endianness.c`](./100-get_endianness.c)
	- Example file: [`100-main.c`](./100-main.c)
---
#### 7
###### [Table of Contents](#table-of-contents)
**7. Crackme3**
- Find the password for [this program](https://github.com/alx-tools/0x13.c "this program").

    - Save the password in the file `101-password`
    - Your file should contain the exact password, no new line, no extra space

```
julien@ubuntu:~/0x14. Binary$ ./crackme3 `cat 101-password`
Congratulations!
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x14-bit_manipulation`
    - File: [`101-password`](./101-password)
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
