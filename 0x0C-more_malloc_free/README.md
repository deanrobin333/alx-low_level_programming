# Project 
## **0x0C. C - More malloc, free**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. Trust no one](#0)
	- [1. string_nconcat](#1)
	- [](#2)
	- [](#3)
	- [](#4)
	- [](#5)
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

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. Trust no one**
- Write a function that allocates memory using `malloc`.

    - Prototype: `void *malloc_checked(unsigned int b);`
    - Returns a pointer to the allocated memory
    - if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`

```
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
julien@ubuntu:~/0x0b. more malloc, free$ ./a
0x1e39010
0x1e39830
0x7f31f6c19010
julien@ubuntu:~/0x0b. more malloc, free$ echo $?
98
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0C-more_malloc_free`
    - File: [`0-malloc_checked.c`](./0-malloc_checked.c)
	- Example file: [`-main.c`](./-main.c)
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. string_nconcat**
- Write a function that concatenates two strings.

    - Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
    - The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
    - If the function fails, it should return `NULL`
    - If `n` is greater or equal to the length of `s2` then use the entire string `s2`
    - if `NULL` is passed, treat it as an empty string

```
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat
julien@ubuntu:~/0x0b. more malloc, free$ ./1-string_nconcat
Best School
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0C-more_malloc_free`
    - File: [`1-string_nconcat.c`](./1-string_nconcat.c)
	- Example file: [`1-main.c`](./1-main.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0C-more_malloc_free`
    - File: [``](./)
---
#### 3
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0C-more_malloc_free`
    - File: [``](./)
---
#### 4
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0C-more_malloc_free`
    - File: [``](./)
---
#### 5
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0C-more_malloc_free`
    - File: [``](./)
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
