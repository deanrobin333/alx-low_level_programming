# Project 
## **0x06. C - More pointers, arrays and strings**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. strcat](#0)
	- [1. strncat](#1)
	- [2. This report, by its very length, defends itself against the risk of being read](#2)
	- [3. strcmp](#3)
	- [4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy](#4)
	- [5. Always look up](#5)
	- [6. Expect the best. Prepare for the worst. Capitalize on what comes](#6)
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
**2. This report, by its very length, defends itself against the risk of being read**
- Write a function that copies a string.
    
    - Prototype: `char *_strncpy(char *dest, char *src, int n);`
    - Your function should work exactly like `strncpy`
    
- FYI: The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.
    

```
julien@ubuntu:~/0x06$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: `2-strncpy.c`
	- Example file: `2-main.c`
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. strcmp**
- Write a function that compares two strings.

    - Prototype: `int _strcmp(char *s1, char *s2);`
    - Your function should work exactly like `strcmp`

- FYI: The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.


```
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
julien@ubuntu:~/0x06$ ./3-strcmp
-15
15
0
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: `3-strcmp.c`
	- Example file: `3-main.c`
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
- Write a function that reverses the content of an array of integers.

    - Prototype: `void reverse_array(int *a, int n);`
    - Where `n` is the number of elements of the array

```
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
julien@ubuntu:~/0x06$ ./4-rev_array
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: `4-rev_array.c`
	- Example file: `4-main.c`
---
#### 5
###### [Table of Contents](#table-of-contents)
**5. Always look up**
- Write a function that changes all lowercase letters of a string to uppercase.

    - Prototype: `char *string_toupper(char *);`

```
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/0x06$ ./5-string_toupper
LOOK UP!
LOOK UP!
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: `5-string_toupper.c`
	- Example file: `5-main.c`
---
#### 6
###### [Table of Contents](#table-of-contents)
**6. Expect the best. Prepare for the worst. Capitalize on what comes**
- Write a function that capitalizes all words of a string.

    - Prototype: `char *cap_string(char *);`
    - Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`

```
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
julien@ubuntu:~/0x06$ ./6-cap
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x06-pointers_arrays_strings`
    - File: `6-cap_string.c`
	- Example file: `6-main.c`
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
