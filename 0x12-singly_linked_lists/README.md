# Project 
## **0x12. C - Singly linked lists**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. Print list](#0)
	- [](#1)
	- [](#2)
	- [](#3)
	- [](#4)
	- [](#5)
	- [](#6)
---
## Author Details
- *Dean Robin Otsyeno - deanrobin777@gmail.com*

## Project Description
### General

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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## More Info

Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```


## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. Print list**
- Write a function that prints all the elements of a `list_t` list.

    - Prototype: `size_t print_list(const list_t *h);`
    - Return: the number of nodes
    - Format: see example
    - If `str` is `NULL`, print `[0] (nil)`
    - You are allowed to use `printf`
```
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [`0-print_list.c`](./0-print_list.c)
	- Example file: [`0-main.c`](./0-main.c)
---
#### 1
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---
#### 3
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---
#### 4
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---
#### 5
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---
#### 6
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
