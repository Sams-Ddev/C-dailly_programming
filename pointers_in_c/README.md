# Project Title

Toggle navigation

## Pointers and Arrays

This project provides examples and explanations of pointers and arrays in C programming language.

## Pointers

A pointer is a variable that stores a memory address.

### Types and Memory

Every time a variable is declared, the computer reserves memory for that variable. The amount of memory reserved depends on the type of the variable. The sizes of common types on most 64-bit Linux machines are:

- `char` -> 1 byte
- `int` -> 4 bytes
- `float` -> 4 bytes

To determine the size of these types on your computer, you can use the `sizeof` operator.

```c
#include <stdio.h>

int main(void)
{
   int n; 

   printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
   printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
   printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
   printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));
   return 0;
}
```

### Storing Memory Addresses

A pointer stores the address of a piece of data in memory. The general form to declare a pointer variable is:

```c
var_type *var;
```

For example:

```c
int *ptr;
char *ptr2;
```

The size of pointers on most 64-bit machines is 8 bytes.

### Dereferencing

Pointers can manipulate values stored at the memory address they point to. This is called dereferencing and is done using the dereference operator `*`.

```c
#include <stdio.h>

int main(void)
{
   int n;
   int *p;

   n = 98;
   p = &n;
   printf("Value of 'n': %d\n", n);
   printf("Address of 'n': %p\n", &n);
   printf("Value of 'p': %p\n", p);
   *p = 402;
   printf("Value of 'n': %d\n", n);
   return 0;
}
```

### Functions Parameters Are Passed by Value

When a function is called, the parameters are copied. Modifying the copied parameter inside the function does not affect the original variable.

```c
#include <stdio.h>

void modif_my_param(int m)
{
   m = 402;
}

int main(void)
{
   int n;

   n = 98;
   modif_my_param(n);
   return 0;
}
```

### Modifying Variables using Pointers

Pointers can be used to modify variables from outside the function they are declared in.

```c
#include <stdio.h>

void modif_my_param(int *m)
{
   *m = 402;
}

int main(void)
{
   int n;
   int *p;

   // Code omitted for brevity

   return 0;
}
```

## Installation

To use this project, follow these steps:

1. Clone the repository: `git clone https://github.com/your-username/your-repo.git`
2. ...
3. ...

## Usage

- Step 1: ...
- Step 2: ...
- Step 3: ...

## Contributions

Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to submit a pull request.

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).
