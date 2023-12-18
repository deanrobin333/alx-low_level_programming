# Project 
## **0x0E. C - Structures, typedef**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. Poppy](#0)
	- [1. A dog is the only thing on earth that loves you more than you love yourself](#1)
	- [2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad](#2)
	- [](#3)
	- [](#4)
	- [](#5)
---
## Author Details
- *Dean Robin Otsyeno - deanrobin777@gmail.com*

## Project Description
- - Allowed editors: `vi`, `vim`, `emacs`
    - All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
    - All your files should end with a new line
    - A `README.md` file, at the root of the folder of the project is mandatory
    - Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")
    - You are not allowed to use global variables
    - No more than 5 functions per file
    - The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`.
    - In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
    - Don’t forget to push your header file
    - All your header files should be include guarded

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. Poppy**
- Define a new type `struct dog` with the following elements:

    - `name`, type = `char *`
    - `age`, type = `float`
    - `owner`, type = `char *`

```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a
My name is Poppy, and I am 3.5 :) - Woof!
```

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0E-structures_typedef`
    - File: [`dog.h`](./dog.h)
	- Example file: [`0-main.c`](./0-main.c)
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. A dog is the only thing on earth that loves you more than you love yourself**
- Write a function that initialize a variable of type `struct dog`

    - Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b
My name is Poppy, and I am 3.5 :) - Woof!
```

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0E-structures_typedef`
    - File: [`1-init_dog.c`](./1-init_dog.c)
	- Example file: [`1-main.c`](./1-main.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad**
- Write a function that prints a `struct dog`

    - Prototype: `void print_dog(struct dog *d);`
    - Format: see example bellow
    - You are allowed to use the standard library
    - If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
    - If `d` is `NULL` print nothing.

```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c
Name: Poppy
Age: 3.500000
Owner: Bob
```

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0E-structures_typedef`
    - File: [`2-print_dog.c`](./2-print_dog.c)
	- Example file: [`2-main.c`](./2-main.c)
---
#### 3
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0E-structures_typedef`
    - File: [``](./)
---
#### 4
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0E-structures_typedef`
    - File: [``](./)
---
#### 5
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0E-structures_typedef`
    - File: [``](./)
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
