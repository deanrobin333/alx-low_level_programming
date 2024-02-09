# Project 
## **0x12. C - Singly linked lists**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. Print list](#0)
	- [1. List length](#1)
	- [2. Add node](#2)
	- [3. Add node at the end](#3)
	- [4. Free list](#4)
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
**1. List length**
- Write a function that returns the number of elements in a linked `list_t` list.

    - Prototype: `size_t list_len(const list_t *h);`

```
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
julien@ubuntu:~/0x12. Singly linked lists$ ./b
-> 2 elements
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [`1-list_len.c`](./1-list_len.c)
	- Example file: [`1-main.c`](./1-main.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. Add node**
- Write a function that adds a new node at the beginning of a `list_t` list.

    - Prototype: `list_t *add_node(list_t **head, const char *str);`
    - Return: the address of the new element, or `NULL` if it failed
    - `str` needs to be duplicated
    - You are allowed to use `strdup`

```
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/0x12. Singly linked lists$ ./c
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [`2-add_node.c`](./2-add_node.c)
	- Example file: [`2-main.c`](./2-main.c)
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. Add node at the end**
- Write a function that adds a new node at the end of a `list_t` list.

    - Prototype: `list_t *add_node_end(list_t **head, const char *str);`
    - Return: the address of the new element, or `NULL` if it failed
    - `str` needs to be duplicated
    - You are allowed to use `strdup`

```
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
julien@ubuntu:~/0x12. Singly linked lists$ ./d
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [`3-add_node_end.c`](./3-add_node_end.c)
	- Example file: [`3-main.c`](./3-main.c)
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. Free list**
- Write a function that frees a `list_t` list.

    - Prototype: `void free_list(list_t *head);`

```
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
julien@ubuntu:~/0x12. Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598==
[6] Bob
[1] &
[3] Kris
[4] love
[3] asm
==3598==
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598==
==3598== All heap blocks were freed -- no leaks are possible
==3598==
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x12-singly_linked_lists`
    - File: [`4-free_list.c`](./4-free_list.c)
	- Example file: [`4-main.c`](./4-main.c)
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
