# Project 
## **0x06. C - More pointers, arrays and strings**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. strcat](#0)
	- [1. strncat](#1)
	- [](#2)
	- [](#3)
	- [](#4)
	- [](#5)
	- [](#6)
	- [](#7)
	- [](#8)
	- [](#9)
	- [](#10)
	- [](#11)
	- [](#12)
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
**0. strcat**
- Write a function that concatenates two strings.

    - Prototype: `char *_strcat(char *dest, char *src);`
    - This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
    - Returns a pointer to the resulting string `dest`

- FYI: The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.
```
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x06$ ./0-strcat
Hello
World!
Hello World!
World!
Hello World!
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: `0-strcat.c`
	- Example file: `0-main.c`
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. strncat**
- Write a function that concatenates two strings.

    - Prototype: `char *_strncat(char *dest, char *src, int n);`
    - The `_strncat` function is similar to the `_strcat` function, except that
        - it will use at most `n` bytes from `src`; and
        - `src` does not need to be null-terminated if it contains `n` or more bytes
    - Return a pointer to the resulting string `dest`

- FYI: The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.


```
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
julien@ubuntu:~/0x06$ ./1-strncat
Hello
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: `1-strncat.c`
	- Example file: `1-main.c`
---
#### 2
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 3
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 4
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 5
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 6
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 7
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 8
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 9
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 10
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 11
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---
#### 12
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: ``
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
