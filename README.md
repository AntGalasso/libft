*This project has been created as part of the 42 curriculum by <pneto>.*

# Libft

## Description  
Libft is a custom C library. Its purpose is to reimplement essential standard C library functions, extend them with additional utility functions, and introduce a basic implementation of linked lists.  
  
- low-level memory management  
- string manipulation  
- dynamic allocation  
- pointer arithmetic  
- linked list data structures  
- code organization and modularity  
- Makefile usage and static library creation  


The final result is the library "libft.a".

# Instructions  

To compile the library, you must provide a "Makefile" that produces "libft.a" using:

-Wall -Wextra -Werror

Makefile rules:
-NAME -> of the target file
-all -> to create use the command "make all"
-clean -> remove objects files with the command "make clean" 
-fclean -> remove objects files and archive file with the command "make fclean" 
-re -> recreate the files using the commands "fclean + all" 
-ar rcs libft.a *.o -> to create the libft.a file 

# Resources  

 **Manual pages**
  man 3 memset, man 3 memcpy, man 3 calloc,  
  man 3 strdup, man 3 strlcpy, man 3 strlcat

**Memory management references**
  - Understanding malloc, free, and dynamic allocation  
  - Articles about pointer safety and memory leaks  

**String manipulation references**
  - Documentation on C strings and buffer handling 

**Linked list references**
  - Guides explaining node structures, pointer traversal, and list operations  

**Use of AI**

AI was used to:
-Help with the structuring of this README
-Debug memory-related functions such as "ft_split", "ft_strdup", and other functions  
-Understanding concepts: linked lists, structures, and nodes  

# Functions Overview  

# PART 1 — Standard C Library Functions

**Character checks**
- ft_isalpha – checks if a character is alphabetical  
- ft_isdigit – checks if a character is a digit  
- ft_isalnum – checks if a character is alphanumeric  
- ft_isascii – checks if a character is a valid ASCII character  
- ft_isprint – checks if a character is printable  

**Character conversion**
- ft_toupper – converts a character to uppercase  
- ft_tolower – converts a character to lowercase  

**Memory functions** 
- ft_memset – fills bytes in memory with a constant value  
- ft_bzero – writes zeroes to a memory area  
- ft_memcpy – copies memory from source to destination  
- ft_memmove – safely copies overlapping memory areas  
- ft_memchr – locates a byte in memory  
- ft_memcmp – compares two memory areas  

**String functions**
- ft_strlen – returns the length of a string  
- ft_strlcpy – copies a string with size limitation  
- ft_strlcat – concatenates strings with size limitation  
- ft_strchr – locates a character in a string  
- ft_strrchr – locates the last occurrence of a character  
- ft_strncmp – compares two strings  
- ft_strnstr – locates a substring within a string  
- ft_strdup – duplicates a string (uses malloc)  

**Conversion**
- ft_atoi – converts a string to an integer  

**Memory allocation** 
- ft_calloc – allocates memory and sets it to zero  

# PART 2 — Additional Functions

**String manipulation**  
- ft_substr – extracts a substring  
- ft_strjoin – concatenates two strings  
- ft_strtrim – trims characters from both ends of a string  
- ft_split – splits a string into an array of substrings  
- ft_itoa – converts an integer into a string  
- ft_strmapi – applies a function to each character of a string  
- ft_striteri – applies a function to each character of a string (in place)

**Output functions**
- ft_putchar_fd – outputs a character to a file descriptor  
- ft_putstr_fd – outputs a string to a file descriptor  
- ft_putendl_fd – outputs a string followed by a newline  
- ft_putnbr_fd – outputs an integer to a file descriptor  

# PART 3 — Linked List Functions

All linked list functions operate on the t_list structure:

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

**List creation and manipulation**
- ft_lstnew – creates a new list node  
- ft_lstadd_front – adds a node to the beginning of the list  
- ft_lstadd_back – adds a node to the end of the list  
- ft_lstsize – returns the number of nodes in the list  
- ft_lstlast – returns the last node of the list  

**List deletion and cleanup**
- ft_lstdelone – deletes a single node using a function  
- ft_lstclear – deletes all nodes and frees memory  
- ft_lstiter – applies a function to each node's content  

**List mapping**  
- ft_lstmap – creates a new list by applying a function to each node's content  