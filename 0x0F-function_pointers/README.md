# Project 
## **0x0F. C - Function pointers**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. What's my name](#0)
	- [1. If you spend too much time thinking about a thing, you'll never get it done](#1)
	- [2. To hell with circumstances; I create opportunities](#2)
	- [](#3)
	- [](#4)
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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `function_pointers.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. What's my name**
- Write a function that prints a name.
    
    - Prototype: `void print_name(char *name, void (*f)(char *));`

```
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
julien@ubuntu:~/0x0e. Function pointers$ ./a 
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0F-function_pointers`
    - File: [`0-print_name.c`](./0-print_name.c)
    - Example file: [`0-main.c`](./0-main.c)
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. If you spend too much time thinking about a thing, you'll never get it done**
- Write a function that executes a function given as a parameter on each element of an array.
    
    - Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
    - where `size` is the size of the array
    - and `action` is a pointer to the function you need to use

```
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
julien@ubuntu:~/0x0e. Function pointers$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0F-function_pointers`
    - File: [`1-array_iterator.c`](./1-array_iterator.c)
    - Example file: [`1-main.c`](./1-main.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. To hell with circumstances; I create opportunities**
- Write a function that searches for an integer.

    - Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
    - where `size` is the number of elements in the array `array`
    - `cmp` is a pointer to the function to be used to compare values
    - `int_index` returns the index of the first element for which the `cmp` function does not return `0`
    - If no element matches, return `-1`
    - If size <= `0`, return `-1`

```
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
julien@ubuntu:~/0x0e. Function pointers$ ./c
2
1
2
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0F-function_pointers`
    - File: [`2-int_index.c`](./2-int_index.c)
	- Example file: [`2-main.c`](./2-main.c)
---
#### 3
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0F-function_pointers`
    - File: [``](./)
---
#### 4
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0F-function_pointers`
    - File: [``](./)
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
