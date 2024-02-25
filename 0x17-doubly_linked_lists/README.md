# Project 
## **0x17. C - Doubly linked lists**
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
	- [5. Get node at index](#5)
	- [6. Sum list](#6)
	- [7. Insert at index](#7)
	- [8. Delete at index](#8)
	- [9. Crackme4](#9)
	- [10. Palindromes](#10)
	- [11. crackme5](#11)
---
## Author Details
- *Dean Robin Otsyeno - deanrobin777@gmail.com*

## Project Description
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. Print list**
- Write a function that prints all the elements of a `dlistint_t` list.

    - Prototype: `size_t print_dlistint(const dlistint_t *h);`
    - Return: the number of nodes
    - Format: see example

```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x17. Doubly linked lists$ ./a
9
8
-> 2 elements
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [`0-print_dlistint.c`](./0-print_dlistint.c)
	- Example file: [`0-main.c`](./0-main.c)
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. List length**
- Write a function that returns the number of elements in a linked `dlistint_t` list.

    - Prototype: `size_t dlistint_len(const dlistint_t *h);`

```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/0x17. Doubly linked lists$ ./b
-> 2 elements
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [`1-dlistint_len.c`](./1-dlistint_len.c)
	- Example file: [`1-main.c`](./1-main.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. Add node**
- Write a function that adds a new node at the beginning of a `dlistint_t` list.

    - Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
    - Return: the address of the new element, or `NULL` if it failed

```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/0x17. Doubly linked lists$ ./c
1024
402
98
4
3
2
1
0
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [`2-add_dnodeint.c`](./2-add_dnodeint.c)
	- Example file: [`2-main.c`](./2-main.c)
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. Add node at the end**
- Write a function that adds a new node at the end of a `dlistint_t` list.

    - Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
    - Return: the address of the new element, or `NULL` if it failed

```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/0x17. Doubly linked lists$ ./d
0
1
2
3
4
98
402
1024
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [`3-add_dnodeint_end.c`](./3-add_dnodeint_end.c)
	- Example file: [`3-main.c`](./3-main.c)
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. Free list**
- Write a function that frees a `dlistint_t` list.

    - Prototype: `void free_dlistint(dlistint_t *head);`

```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197==
0
1
2
3
4
98
402
1024
==4197==
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197==
==4197== All heap blocks were freed -- no leaks are possible
==4197==
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [`4-free_dlistint.c`](./4-free_dlistint.c)
	- Example file: [`4-main.c`](./4-main.c)
---
#### 5
###### [Table of Contents](#table-of-contents)
**5. Get node at index**
- Write a function that returns the nth node of a `dlistint_t` linked list.

    - Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
    - where `index` is the index of the node, starting from `0`
    - if the node does not exist, return `NULL`

```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/0x17. Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [`5-get_dnodeint.c`](./5-get_dnodeint.c)
	- Example file: [`5-main.c`](./5-main.c)
---
#### 6
###### [Table of Contents](#table-of-contents)
**6. Sum list**
- Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

    - Prototype: `int sum_dlistint(dlistint_t *head);`
    - if the list is empty, return `0`

```
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/0x17. Doubly linked lists$ ./i
sum = 1534
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [`6-sum_dlistint.c`](./6-sum_dlistint.c)
	- Example file: [`6-main.c`](./6-main.c)
---
#### 7
###### [Table of Contents](#table-of-contents)
**7. Insert at index**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---
#### 8
###### [Table of Contents](#table-of-contents)
**8. Delete at index**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---
#### 9
###### [Table of Contents](#table-of-contents)
**9. Crackme4**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---
#### 10
###### [Table of Contents](#table-of-contents)
**10. Palindromes**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---
#### 11
###### [Table of Contents](#table-of-contents)
**11. crackme5**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x17-doubly_linked_lists`
    - File: [``](./)
	- Example file: [`-main.c`](./-main.c)
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
