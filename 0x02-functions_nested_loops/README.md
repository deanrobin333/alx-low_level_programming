# Project 
## **0x02. C - Functions, nested loops**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. \_putchar](#0)
	- [1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](#1)
	- [2. 10 x alphabet](#2)
	- [3. islower](#3)
	- [4. isalpha](#4)
	- [5. Sign](#5)
	- [6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](#6)
	- [7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](#7)
	- [8. I'm federal agent Jack Bauer, and today is the longest day of my life](#8)
	- [](#9)
	- [](#10)
	- [](#11)
	- [](#12)
	- [](#13)
	- [](#14)
	- [](#15)
	- [](#16)
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
**0. _putchar**
- Write a program that prints `_putchar`, followed by a new line.
    - The program should return `0`

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: `0-putchar.c`
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
- Write a function that prints the alphabet, in lowercase, followed by a new line.
    - Prototype: `void print_alphabet(void);`
    - You can only use `_putchar` twice in your code

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: `1-alphabet.c`
	- Example file: `1-main.c`
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. 10 x alphabet**
- Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
    - Prototype: `void print_alphabet_x10(void);`
    - You can only use `_putchar` twice in your code
    ```
    julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
    julien@ubuntu:~/0x02$ ./2-alphabet_x10 
    abcdefghijklmnopqrstuvwxyz
    abcdefghijklmnopqrstuvwxyz
    abcdefghijklmnopqrstuvwxyz
    abcdefghijklmnopqrstuvwxyz
    abcdefghijklmnopqrstuvwxyz
    abcdefghijklmnopqrstuvwxyz
    abcdefghijklmnopqrstuvwxyz
    abcdefghijklmnopqrstuvwxyz
    abcdefghijklmnopqrstuvwxyz
    abcdefghijklmnopqrstuvwxyz
    ```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: `2-print_alphabet_x10.c`
	- Example file: `2-main.c`
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. islower**
- Write a function that checks for lowercase character.
    - Prototype: `int _islower(int c);`
    - Returns `1` if `c` is lowercase
    - Returns `0` otherwise
- FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower
011 
``` 
<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: `3-islower.c`
	- Example file: `3-main.c`
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. isalpha**
- Write a function that checks for alphabetic character.

    - Prototype: `int _isalpha(int c);`
    - Returns `1` if `c` is a letter, lowercase or uppercase
    - Returns `0` otherwise

- FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
julien@ubuntu:~/0x02$ ./4-isalpha 
1110
```
<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: `4-isalpha.c`
	- Example file: `4-main.c`
---
#### 5
###### [Table of Contents](#table-of-contents)
**5. Sign**
- Write a function that prints the sign of a number.
    
    - Prototype: `int print_sign(int n);`
    - Returns `1` and prints `+` if `n` is greater than zero
    - Returns `0` and prints `0` if `n` is zero
    - Returns `-1` and prints `-` if `n` is less than zero
        
	```
	julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
	julien@ubuntu:~/0x02$ ./5-sign 
	+, 1
	0, 0
	+, 1
	-, /
	```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: `5-sign.c`
	- Example file: `5-main.c`
---
#### 6
###### [Table of Contents](#table-of-contents)
**6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
- Write a function that computes the absolute value of an integer.

    - Prototype: `int _abs(int);`

- FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.
	```
	julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs
	julien@ubuntu:~/0x02$ ./6-abs
	1
	0
	1
	98
	```


<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: `6-abs.c`
	- Example file: `6-main.c`
---
#### 7
###### [Table of Contents](#table-of-contents)
**7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**
- Write a function that prints the last digit of a number
    - Prototype: `int print_last_digit(int);`
    - Returns the value of the last digit

	```
	julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
	julien@ubuntu:~/0x02$ ./7-last_digit
	8044
	```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: `7-print_last_digit.c`
	- Example file: `7-main.c`
---
#### 8
###### [Table of Contents](#table-of-contents)
**8. I'm federal agent Jack Bauer, and today is the longest day of my life**
- Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

    - Prototype: `void jack_bauer(void);`
    - You can listen to [this soundtrack](https://www.youtube.com/watch?v=btAfXqgMkPs "this soundtrack") while coding :)
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
julien@ubuntu:~/0x02$ ./8-24 | head -3
00:00
00:01
00:02
julien@ubuntu:~/0x02$ ./8-24 | tail -3
23:57
23:58
23:59
```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: `8-24_hours.c`
	- Example file: `8-main.c`
---
#### 9
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: ``
---
#### 10
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: ``
---
#### 11
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: ``
---
#### 12
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: ``
---
#### 13
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: ``
---
#### 14
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: ``
---
#### 15
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: ``
---
#### 16
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x02-functions_nested_loops`
    - File: ``
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
