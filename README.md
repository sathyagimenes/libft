# 📚 Libft
My own C static library with recoded standard functions from 'libc' + extra functions

<br/>
<h2>📌 About
<h3>This repo contains my solution to <a href="https://42.fr/en/homepage/" target="_blank">École 42</a>'s Libft project. The aim of this project is to create our own library by recoding functions from C standard library and some extra functions that might be used in future projects.

> Applied Knowledge: Data structure | Algorithm development | Pointers | Memory alocation

<br/>

### Functions from `<ctype.h>` library

* [`ft_isascii`](libft/ft_isascii.c)			| checks for an ASCII character.
* [`ft_isalnum`](libft/ft_isalnum.c)			| checks for an alphanumeric character.
* [`ft_isalpha`](libft/ft_isalpha.c)			| checks for an alphabetic character.
* [`ft_isdigit`](libft/ft_isdigit.c)		| checks for a decimal-digit character.
* [`ft_isprint`](libft/ft_isprint.c)		| checks for a printing character.
* [`ft_tolower`](libft/ft_tolower.c)		| converts uppercase letters to lowercase.
* [`ft_toupper`](libft/ft_toupper.c)		| converts lowercase letters to uppercase.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/ft_atoi.c)		| converts ASCII string to integer.
* [`ft_calloc`](libft/ft_calloc.c)	| allocates memory and sets it to zero.

### Functions from `<strings.h>` library

* [`ft_bzero`](libft/ft_bzero.c)		| erases data writing zeroes to a byte string.

### Functions from `<string.h>` library

* [`ft_memset`](libft/ft_memset.c)		| fills the first 'n' bytes of a byte string with a specified byte 'c'.
* [`ft_memchr`](libft/ft_memchr.c)		| locates a specified byte in a byte string.
* [`ft_memcmp`](libft/ft_memcmp.c)		| compares two byte strings.
* [`ft_memmove`](libft/ft_memmove.c)	| copies n bytes from one memory area to another (may overlap).
* [`ft_memcpy`](libft/ft_memcpy.c)		| copies n bytes from one memory area to another (must not overlap).
* [`ft_strlen`](libft/ft_strlen.c)    | calculates the length of a string.
* [`ft_strchr`](libft/ft_strchr.c)		| locates the first occurance of a specified character in a string.
* [`ft_strrchr`](lift/ft_strrchr.c)   | locates the last occurence of a specified character in a string.
* [`ft_strnstr`](libft/ft_strnstr.c)	| locates a specified substring in a string (size-bounded).
* [`ft_strncmp`](libft/ft_strncmp.c)	|	compares two byte strings (size-bounded).
* [`ft_strdup`](libft/ft_strdup.c)		| saves a copy of a string (with malloc).
* [`ft_strlcpy`](libft/ft_strlcpy.c)	| makes a size-bounded copy of a string.
* [`ft_strlcat`](libft/ft_strlcat.c)	| appends a string to another (size-bounded) string.

### Non-standard functions

* [`ft_putchar_fd`](libft/ft_putchar_fd.c)		| outputs a character to a given file descriptor.
* [`ft_putstr_fd`](libft/ft_putstr_fd.c)		  | outputs a string to a given file descriptor.
* [`ft_putendl_fd`](libft/ft_putendl_fd.c)		| outputs a string followed by a newline to a given file descriptor.
* [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)		  | outputs an integer to a given file descriptor.
* [`ft_itoa`](libft/ft_itoa.c)				      	| converts integer to ASCII string.
* [`ft_substr`](libft/ft_substr.c)				    | creates a substring from a string.
* [`ft_strtrim`](libft/ft_strtrim.c)			| removes the specified characters from the beginning and end of a string.
* [`ft_strjoin`](libft/ft_strjoin.c)			| concatenates two strings into a new string (with malloc).
* [`ft_split`](libft/ft_split.c)				  | splits a string into an array of strings, using a specified character as a delimiter.
* [`ft_strmapi`](libft/ft_strmapi.c)			| applies a specified function to each character of a string and return the result in a new string.
* [`ft_striteri`](libft/ft_striteri.c)    | applies a specified function on each character of the string passed as argument.

<br/>

## 🛠️ Usage

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**Compiling the library**

To compile the library, run:

```shell
cd path/to/libft && make
```

**Using it in your code**

To use the library functions in your code, include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```
