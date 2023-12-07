# Project 
## **0x04. C - More functions, more nested loops**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. isupper](#0)
	- [1. isdigit](#1)
	- [2. Collaboration is multiplication](#2)
	- [3. The numbers speak for themselves](#3)
	- [4. I believe in numbers and signs](#4)
	- [5. Numbers constitute the only universal language](#5)
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
**0. isupper**
- Write a function that checks for uppercase character.

    - Prototype: `int _isupper(int c);`
    - Returns `1` if `c` is uppercase
    - Returns `0` otherwise
- FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper
A: 1
a: 0
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: `0-isupper.c`
	- Example file: `0-main.c`
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. isdigit**
- Write a function that checks for a digit (`0` through `9`).

    - Prototype: `int _isdigit(int c);`
    - Returns `1` if `c` is a digit
    - Returns `0` otherwise

- FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit
0: 1
a: 0
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: `1-isdigit.c`
	- Example file: `1-main.c`
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. Collaboration is multiplication**
- Write a function that multiplies two integers.

    - Prototype: `int mul(int a, int b);`

```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul
100352
-1646592
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: `2-mul.c`
	- Example file: `2-main.c`
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. The numbers speak for themselves**
- Write a function that prints the numbers, from `0` to `9`, followed by a new line.

    - Prototype: `void print_numbers(void);`
    - You can only use `_putchar` twice in your code

```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: `3-print_numbers.c`
	- Example file: `3-main.c`
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. I believe in numbers and signs**
- Write a function that prints the numbers, from `0` to `9`, followed by a new line.

    - Prototype: `void print_most_numbers(void);`
    - Do not print `2` and `4`
    - You can only use `_putchar` twice in your code

```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/0x04$ ./4-print_most_numbers
01356789
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: `4-print_most_numbers.c`
	- Example file: `4-main.c`
---
#### 5
###### [Table of Contents](#table-of-contents)
**5. Numbers constitute the only universal language**
- Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.

    - Prototype: `void more_numbers(void);`
    - You can only use `_putchar` three times in your code

```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/0x04$ ./5-more_numbers | head -2
01234567891011121314
01234567891011121314
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: `5-more_numbers.c`
	- Example file: `5-main.c`
---
#### 6
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: ``
---
#### 7
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: ``
---
#### 8
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: ``
---
#### 9
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: ``
---
#### 10
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: ``
---
#### 11
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: ``
---
#### 12
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x04-more_functions_nested_loops`
    - File: ``
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
