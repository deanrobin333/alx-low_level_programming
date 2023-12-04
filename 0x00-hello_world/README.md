# Project 
## **0x00. C - Hello, World**
---
## Table of Contents
- [Author Details](#author-details)
- [Project Description](#project-description)
- [Tasks](#tasks)
	- [0. Preprocessor](#0)
	- [1. Compiler](#1)
	- [2. Assembler](#2)
	- [3. Name](#3)
	- [4. Hello, puts](#4)
	- [5. Hello, printf](#5)
	- [6. Size is not grandeur, and territory does not make a nation](#6)
	- [](#7)
	- [](#8)
---
## Author Details
- *Dean Robin Otsyeno - deanrobin777@gmail.com*

## Project Description
### C

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the repo, containing a description of the repository
- A `README.md` file, at the root of the folder of *this* project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl "betty-doc.pl")

### Shell Scripts

- Allowed editors: `vi`, `vim`, `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`

## More Info

### Betty linter

To run the Betty linter just with command `betty <filename>`:

- Go to the [Betty](https://github.com/alx-tools/Betty "Betty") repository
- Clone the [repo](https://github.com/alx-tools/Betty "repo") to your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`
- `emacs` or `vi` a new file called `betty`, and copy the script below:

```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
- You can now type `betty <filename>` to run the Betty linter!

## Tasks
#### 0
###### [Table of Contents](#table-of-contents)
**0. Preprocessor**
- Write a script that runs a C file through the preprocessor and save the result into another file.
    - The C file name will be saved in the variable `$CFILE`
    - The output should be saved in the file `c`

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x00-hello_world`
    - File: `0-preprocessor`
	- Example file: `main.c`
---
#### 1
###### [Table of Contents](#table-of-contents)
**1. Compiler**
- Write a script that compiles a C file but does not link.

    - The C file name will be saved in the variable `$CFILE`
    - The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
        - Example: if the C file is `main.c`, the output file should be `main.o`

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x00-hello_world`
    - File: `1-compiler`
	- Example file: `main.c`
---
#### 2
###### [Table of Contents](#table-of-contents)
**2. Assembler**
- Write a script that generates the assembly code of a C code and save it in an output file.
    - The C file name will be saved in the variable `$CFILE`
    - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
        - Example: if the C file is `main.c`, the output file should be `main.s`

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x00-hello_world`
    - File: `2-assembler`
	- Example file: `main.c`
---
#### 3
###### [Table of Contents](#table-of-contents)
**3. Name**
- Write a script that compiles a C file and creates an executable named `cisfun`.
    - The C file name will be saved in the variable `$CFILE`

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x00-hello_world`
    - File: `3-name`
	- Example file: `main.c`
---
#### 4
###### [Table of Contents](#table-of-contents)
**4. Hello, puts**
- Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
    - Use the function `puts`
    - You are not allowed to use `printf`
    - Your program should end with the value `0`

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x00-hello_world`
    - File: `4-puts.c`
---
#### 5
###### [Table of Contents](#table-of-contents)
**5. Hello, printf**
- Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
    - Use the function `printf`
    - You are not allowed to use the function `puts`
    - Your program should return `0`
    - Your program should compile without warning when using the `-Wall` `gcc` option

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x00-hello_world`
    - File: `5-printf.c`
---
#### 6
###### [Table of Contents](#table-of-contents)
**6. Size is not grandeur, and territory does not make a nation**
- Write a C program that prints the size of various types on the computer it is compiled and run on.

    - You should produce the exact same output as in the example
    - Warnings are allowed
    - Your program should return `0`
    - You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32` `gcc` option

    ```
    julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
    julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
    julien@ubuntu:~/c/0x00$ ./size32
    Size of a char: 1 byte(s)
    Size of an int: 4 byte(s)
    Size of a long int: 4 byte(s)
    Size of a long long int: 8 byte(s)
    Size of a float: 4 byte(s)
    julien@ubuntu:~/c/0x00$ ./size64
    Size of a char: 1 byte(s)
    Size of an int: 4 byte(s)
    Size of a long int: 8 byte(s)
    Size of a long long int: 8 byte(s)
    Size of a float: 4 byte(s)
    julien@ubuntu:~/c/0x00$ echo $?
    0
    julien@ubuntu:~/c/0x00$
    ```

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x00-hello_world`
    - File: `6-size.c`
---
#### 7
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x00-hello_world`
    - File: ``
---
#### 8
###### [Table of Contents](#table-of-contents)
**t**

<br></br>
- Repo
    - GitHub repository: `alx-low_level_programming`
    - Directory: `0x00-hello_world`
    - File: ``
---


<br></br>
<div align="right">
  <sub style="font-style: italic"> Dean Robin Otsyeno - deanrobin777@gmail.com</sub>
</div>
