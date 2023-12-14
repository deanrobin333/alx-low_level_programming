# Project 
## **0x08. C - Recursion**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget](#0)
	- [1. Why is it so important to dream? Because, in my dreams we are together](#1)
	- [2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange](#2)
	- [3. You mustn't be afraid to dream a little bigger, darling](#3)
	- [](#4)
	- [](#5)
	- [](#6)
	- [](#7)
	- [](#8)
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
- **You are not allowed to use any kind of loops**
- You are not allowed to use `static` variables

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget**
- Write a function that prints a string, followed by a new line.

    - Prototype: `void _puts_recursion(char *s);`

- FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.
```
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion
Puts with recursion
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x08-recursion`
    - File: [`0-puts_recursion.c`](./0-puts_recursion.c)
	- Example file: [`0-main.c`](./0-main.c)
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. Why is it so important to dream? Because, in my dreams we are together**
- Write a function that prints a string in reverse.

    - Prototype: `void _print_rev_recursion(char *s);`

```
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion
reklaW notloC
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x08-recursion`
    - File: [`1-print_rev_recursion.c`](./1-print_rev_recursion.c)
	- Example file: [`1-main.c`](./1-main.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**
- Write a function that returns the length of a string.

    - Prototype: `int _strlen_recursion(char *s);`

- FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.


```
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion
14
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x08-recursion`
    - File: [`2-strlen_recursion.c`](./2-strlen_recursion.c)
	- Example file: [`2-main.c`](./2-main.c)
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. You mustn't be afraid to dream a little bigger, darling**
- Write a function that returns the factorial of a given number.

    - Prototype: `int factorial(int n);`
    - If `n` is lower than `0`, the function should return `-1` to indicate an error
    - Factorial of `0` is `1`

```
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial
1
120
3628800
-1
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x08-recursion`
    - File: [`3-factorial.c`](./3-factorial.c)
	- Example file: [`3-main.c`](./3-main.c)
---
#### 4
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x08-recursion`
    - File: [``](./)
---
#### 5
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x08-recursion`
    - File: [``](./)
---
#### 6
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x08-recursion`
    - File: [``](./)
---
#### 7
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x08-recursion`
    - File: [``](./)
---
#### 8
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x08-recursion`
    - File: [``](./)
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
