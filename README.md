# Libft
42's Libft project | My own C static library with recoded standard functions from 'libc' + extra functions

<br/>

Libft is a project at École 42 that requieres us to re-create some standard C library functions and extra functions that may be used in future projects.

> Applied Knowledge: Pointers | Memory alocation | Arrays | Conditionals | Loops

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
