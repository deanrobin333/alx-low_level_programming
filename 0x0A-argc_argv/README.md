# Project 
## **0x0A. C - argc, argv**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. It ain't what they call you, it's what you answer to](#0)
	- [1. Silence is argument carried out by other means](#1)
	- [2. The best argument against democracy is a five-minute conversation with the average voter](#2)
	- [3. Neither irony nor sarcasm is argument](#3)
	- [4. To infinity and beyond](#4)
	- [5. Minimal Number of Coins for Change](#5)
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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- You are allowed to use the standard library

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. It ain't what they call you, it's what you answer to**
- Write a program that prints its name, followed by a new line.

    - If you rename the program, it will print the new name, without having to compile it again
    - You should not remove the path before the name of the program

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis
./mynewnameis
```

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0A-argc_argv`    
    - File: [`0-whatsmyname.c`](./0-whatsmyname.c)
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. Silence is argument carried out by other means**
- Write a program that prints the number of arguments passed into it.

    - Your program should print a number, followed by a new line

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0A-argc_argv`    
    - File: [`1-args.c`](./1-args.c)
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. The best argument against democracy is a five-minute conversation with the average voter**
- Write a program that prints all arguments it receives.

    - All arguments should be printed, including the first one
    - Only print one argument per line, ending with a new line

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0A-argc_argv`    
    - File: [`2-args.c`](./2-args.c)
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. Neither irony nor sarcasm is argument**
- Write a program that multiplies two numbers.

    - Your program should print the result of the multiplication, followed by a new line
    - You can assume that the two numbers and result of the multiplication can be stored in an integer
    - If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
```

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0A-argc_argv`    
    - File: [`3-mul.c`](./3-mul.c)
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. To infinity and beyond**
- Write a program that adds positive numbers.

    - Print the result, followed by a new line
    - If no number is passed to the program, print `0`, followed by a new line
    - If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
    - You can assume that numbers and the addition of all the numbers can be stored in an `int`
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
```

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0A-argc_argv`    
    - File: [`4-add.c`](./4-add.c)
---
#### 5
###### [Table of Contents](#table-of-contents)
**5. Minimal Number of Coins for Change**
- Write a program that prints the minimum number of coins to make change for an amount of money.

    - Usage: `./change cents`
    - where `cents` is the amount of cents you need to give back
    - if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`
    - you should use `atoi` to parse the parameter passed to your program
    - If the number passed as the argument is negative, print `0`, followed by a new line
    - You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
julien@ubuntu:~/0x0A. argc, argv$ ./change
Error
julien@ubuntu:~/0x0A. argc, argv$ ./change 10
1
julien@ubuntu:~/0x0A. argc, argv$ ./change 100
4
julien@ubuntu:~/0x0A. argc, argv$ ./change 101
5
julien@ubuntu:~/0x0A. argc, argv$ ./change 13
3
```

<br></br>
- Repo
    
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x0A-argc_argv`    
    - File: [`100-change.c`](./100-change.c)
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
