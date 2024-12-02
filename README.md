
# **Libft**

## **Description**

The `libft` project is one of the foundational projects at 42 School. It requires creating a custom C library, which reimplements several essential standard library functions and introduces additional utility functions. This project strengthens your understanding of C programming, memory management, and data structures.

---

## **Files**

### **Mandatory Part**
The mandatory part of the project focuses on reimplementing functions from:
1. **`<ctype.h>`**
   - `ft_isalpha`: Checks for alphabetic characters.
   - `ft_isdigit`: Checks for numeric characters.
   - `ft_isalnum`: Checks for alphanumeric characters.
   - `ft_isascii`: Checks for ASCII characters.
   - `ft_isprint`: Checks for printable characters.
   - `ft_toupper`: Converts a character to uppercase.
   - `ft_tolower`: Converts a character to lowercase.

2. **`<string.h>`**
   - `ft_strlen`: Computes the length of a string.
   - `ft_memset`: Fills memory with a constant byte.
   - `ft_memcpy`: Copies memory from one location to another.
   - `ft_memmove`: Copies memory, handling overlaps.
   - `ft_strchr`: Finds the first occurrence of a character in a string.
   - `ft_strrchr`: Finds the last occurrence of a character in a string.
   - `ft_strncmp`: Compares two strings up to a specified length.
   - `ft_strlcpy`: Copies a string into a destination buffer with size constraints.
   - `ft_strlcat`: Concatenates strings into a destination buffer with size constraints.
   - `ft_strnstr`: Locates a substring in a string.
   - `ft_memchr`: Scans memory for a byte value.
   - `ft_memcmp`: Compares memory areas.

3. **`<stdlib.h>`**
   - `ft_atoi`: Converts a string to an integer.
   - `ft_calloc`: Allocates memory and initializes it to zero.
   - `ft_strdup`: Duplicates a string.

4. **Custom Functions**
   - `ft_substr`: Extracts a substring from a string.
   - `ft_strjoin`: Concatenates two strings.
   - `ft_strtrim`: Removes specified characters from the start and end of a string.
   - `ft_split`: Splits a string into an array of strings based on a delimiter.
   - `ft_itoa`: Converts an integer to a string.
   - `ft_strmapi`: Applies a function to each character of a string.
   - `ft_striteri`: Applies a function to each character of a string with index.
   - `ft_putchar_fd`: Outputs a character to a file descriptor.
   - `ft_putstr_fd`: Outputs a string to a file descriptor.
   - `ft_putendl_fd`: Outputs a string to a file descriptor, followed by a newline.
   - `ft_putnbr_fd`: Outputs an integer to a file descriptor.

### **Bonus Part**
The bonus part requires implementing a set of functions to manipulate linked lists:
- `ft_lstnew`: Creates a new list element.
- `ft_lstadd_front`: Adds an element at the beginning of a list.
- `ft_lstsize`: Counts the number of elements in a list.
- `ft_lstlast`: Returns the last element of a list.
- `ft_lstadd_back`: Adds an element at the end of a list.
- `ft_lstdelone`: Deletes a list element and frees its memory.
- `ft_lstclear`: Deletes all elements of a list.
- `ft_lstiter`: Iterates over a list and applies a function to each element.
- `ft_lstmap`: Applies a function to each element of a list and creates a new list.

---

## **Key Features**

1. **Norm Compliance**  
   The code strictly adheres to the 42 Norm.

2. **Memory Management**  
   Functions are implemented with careful attention to memory allocation and deallocation to avoid leaks.

3. **Reusability**  
   The library is designed to be used as a foundation in future 42 projects.

---

## **Testing**

### **Example Test Cases**
1. **String Manipulation**
   - Test `ft_strlen`, `ft_strjoin`, and `ft_strtrim` with various inputs.

2. **Memory Functions**
   - Validate `ft_memset`, `ft_memcpy`, and `ft_memmove` with overlapping memory areas.

3. **Linked List Functions (Bonus)**
   - Create, iterate, and clear a linked list using the bonus functions.

### **Third-Party Testers**
Use community-created testers such as:
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [libft-war-machine](https://github.com/ska42/libft-war-machine)
- [libft-tester](https://github.com/Tripouille/libftTester)

---

## **Acknowledgments**

This project is a crucial step in the 42 curriculum, building a foundation for future projects by understanding how standard library functions work internally.

---

