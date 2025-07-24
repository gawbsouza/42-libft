<div align="center">

# Libft

</div>

---

## Description

Libft is a static C library developed as part of the [École 42](https://42.fr/en/homepage/) curriculum. It reimplements classic libc functions and provides utilities for string, memory, and linked list manipulation, among others.

---

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Available Functions](#available-functions)
- [Norminette](#norminette)
- [License](#license)

---

## Installation

**Requirements:**
- [gcc](https://gcc.gnu.org/)
- [make](https://www.gnu.org/software/make/)

Build the library:
```bash
make
```

---

## Usage

1. **Include the header in your code:**
   ```c
   #include "libft.h"
   ```

2. **Compile your code with libft:**
   ```bash
   gcc -I ./inc -L . -lft your_code.c -o your_program
   ```
   - `-I ./inc` tells the compiler where the header is.
   - `-L .` tells where the compiled library (`libft.a`) is.
   - `-lft` links with libft.

---

## Available Functions

| Category                | Main functions                                                                      |
|-------------------------|-------------------------------------------------------------------------------------|
| Character validation    | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`               |
| Character manipulation  | `ft_toupper`, `ft_tolower`                                                         |
| String manipulation     | `ft_strlen`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strjoin`, `ft_split`, `ft_strtrim`, `ft_substr`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_striteri`, `ft_strmapi` |
| Memory manipulation     | `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_bzero`, `ft_calloc` |
| Conversion              | `ft_atoi`, `ft_itoa`                                                               |
| Output                  | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`                   |
| Linked lists            | `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

---

### Character validation

#### [ft_isalpha](./src/ft_isalpha.c)
Checks if a character is an alphabetic letter (A-Z or a-z).  
Returns 1 if true, 0 otherwise.

#### [ft_isdigit](./src/ft_isdigit.c)
Checks if a character is a decimal digit (0-9).  
Returns 1 if true, 0 otherwise.

#### [ft_isalnum](./src/ft_isalnum.c)
Checks if a character is alphanumeric (letter or digit).  
Returns 1 if true, 0 otherwise.

#### [ft_isascii](./src/ft_isascii.c)
Checks if a character is an ASCII character (0-127).  
Returns 1 if true, 0 otherwise.

#### [ft_isprint](./src/ft_isprint.c)
Checks if a character is printable (ASCII 32-126).  
Returns 1 if true, 0 otherwise.

---

### Character manipulation

#### [ft_toupper](./src/ft_toupper.c)
Converts a lowercase letter to uppercase.  
If the character is not lowercase, returns it unchanged.

#### [ft_tolower](./src/ft_tolower.c)
Converts an uppercase letter to lowercase.  
If the character is not uppercase, returns it unchanged.

---

### String manipulation

#### [ft_strlen](./src/ft_strlen.c)
Calculates the length of a null-terminated string.  
Returns the number of characters before the null terminator.

#### [ft_strdup](./src/ft_strdup.c)
Allocates and returns a new string which is a duplicate of the input.  
The memory for the new string is obtained with malloc.

#### [ft_strchr](./src/ft_strchr.c)
Searches for the first occurrence of a character in a string.  
Returns a pointer to the matched character or NULL if not found.

#### [ft_strrchr](./src/ft_strrchr.c)
Searches for the last occurrence of a character in a string.  
Returns a pointer to the matched character or NULL if not found.

#### [ft_strncmp](./src/ft_strncmp.c)
Compares up to n characters of two strings.  
Returns the difference between the first differing characters.

#### [ft_strjoin](./src/ft_strjoin.c)
Concatenates two strings into a newly allocated string.  
Returns the new string or NULL if allocation fails.

#### [ft_split](./src/ft_split.c)
Splits a string into an array of strings using a delimiter character.  
Returns a NULL-terminated array of newly allocated strings.

#### [ft_strtrim](./src/ft_strtrim.c)
Removes all characters in set from the beginning and end of the string.  
Returns a new trimmed string or NULL if allocation fails.

#### [ft_substr](./src/ft_substr.c)
Extracts a substring from a string, starting at a given index and length.  
Returns a newly allocated substring or an empty string if out of bounds.

#### [ft_strlcpy](./src/ft_strlcpy.c)
Copies up to size - 1 characters from src to dst, NUL-terminating the result.  
Returns the total length of src.

#### [ft_strlcat](./src/ft_strlcat.c)
Appends src to dst of size size (NUL-terminating the result).  
Returns the total length of the string it tried to create.

#### [ft_strnstr](./src/ft_strnstr.c)
Locates the first occurrence of the substring little in big, where not more than len characters are searched.  
Returns a pointer to the first occurrence or NULL if not found.

#### [ft_striteri](./src/ft_striteri.c)
Applies a function to each character of a string, passing its index as first argument.  
The function is applied in-place to the string.

#### [ft_strmapi](./src/ft_strmapi.c)
Creates a new string by applying a function to each character of the input string.  
The function receives the index and character as arguments.

---

### Memory manipulation

#### [ft_memset](./src/ft_memset.c)
Fills the first n bytes of the memory area pointed to by mem with the constant byte c.  
Returns a pointer to the memory area mem.

#### [ft_memcpy](./src/ft_memcpy.c)
Copies n bytes from memory area src to memory area dst.  
Returns a pointer to dst.

#### [ft_memmove](./src/ft_memmove.c)
Copies n bytes from src to dst, handling overlapping memory areas safely.  
Returns a pointer to dst.

#### [ft_memchr](./src/ft_memchr.c)
Scans the first n bytes of the memory area for the character c.  
Returns a pointer to the matching byte or NULL if not found.

#### [ft_memcmp](./src/ft_memcmp.c)
Compares the first n bytes of two memory areas.  
Returns the difference between the first differing bytes.

#### [ft_bzero](./src/ft_bzero.c)
Erases the data in the n bytes of the memory area by writing zeros.  
Does not return a value.

#### [ft_calloc](./src/ft_calloc.c)
Allocates memory for an array of nmemb elements of size bytes each and sets all bytes to zero.  
Returns a pointer to the allocated memory or NULL if allocation fails.

---

### Conversion

#### [ft_atoi](./src/ft_atoi.c)
Converts a string to an integer, handling optional whitespace and sign.  
Returns the converted integer value.

#### [ft_itoa](./src/ft_itoa.c)
Allocates and returns a string representing the integer n.  
Handles negative numbers and zero.

---

### Output

#### [ft_putchar_fd](./src/ft_putchar_fd.c)
Outputs the character c to the given file descriptor fd.  
Does not return a value.

#### [ft_putstr_fd](./src/ft_putstr_fd.c)
Outputs the string str to the given file descriptor fd.  
Does not return a value.

#### [ft_putendl_fd](./src/ft_putendl_fd.c)
Outputs the string str to the given file descriptor fd, followed by a newline.  
Does not return a value.

#### [ft_putnbr_fd](./src/ft_putnbr_fd.c)
Outputs the integer n to the given file descriptor fd.  
Does not return a value.

---

### Linked lists

#### [ft_lstnew](./src/ft_lstnew.c)
Allocates and returns a new list node with the given content.  
The next pointer is initialized to NULL.

#### [ft_lstadd_front](./src/ft_lstadd_front.c)
Adds the node new at the beginning of the list.  
Updates the head pointer to the new node.

#### [ft_lstadd_back](./src/ft_lstadd_back.c)
Adds the node new at the end of the list.  
Updates the last node's next pointer.

#### [ft_lstsize](./src/ft_lstsize.c)
Counts the number of nodes in a list.  
Returns the count as an integer.

#### [ft_lstlast](./src/ft_lstlast.c)
Returns the last node of the list.  
If the list is empty, returns NULL.

#### [ft_lstdelone](./src/ft_lstdelone.c)
Frees the memory of a single list node using the given delete function.  
Does not free the next nodes.

#### [ft_lstclear](./src/ft_lstclear.c)
Deletes and frees all nodes of the list using the given delete function.  
Sets the head pointer to NULL.

#### [ft_lstiter](./src/ft_lstiter.c)
Iterates the list and applies a function to the content of each node.  
Does not modify the list structure.

#### [ft_lstmap](./src/ft_lstmap.c)
Creates a new list by applying a function to each node's content of the original list.  
Uses a delete function to free memory if needed.

---

## Quick Example

```c
#include "libft.h"

int main(void)
{
    char *str = "42";
    int num = ft_atoi(str);

    ft_putstr_fd("Converted number: ", 1);
    ft_putnbr_fd(num, 1);
    ft_putstr_fd("\n", 1);

    char *duplicated = ft_strdup(str);
    ft_putstr_fd("Duplicated string: ", 1);
    ft_putstr_fd(duplicated, 1);
    ft_putstr_fd("\n", 1);

    ft_putstr_fd("Hello, 42!\n", 1);

    return 0;
}
```

---

## Norminette

All code follows the [Norm 3.3.x](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) and has been validated by [Norminette](https://github.com/42School/norminette).

---

## License

Distributed under the MIT License. See [LICENSE](./LICENSE) for more information.

---