0x09-static_libraries


General
What is a static library, how does it work, how to create one, and how to use it

A static library is a collection of precompiled object code (compiled from source code) that is bundled together into a single file. It contains functions, classes, and other code that can be used by a program to perform various tasks. Static libraries are also sometimes referred to as "archives" because they archive multiple object files into a single file.

Here's how a static library works:

1. Compilation: Source code files are compiled into individual object files. These object files contain the machine code representation of the functions, classes, and other code defined in the source files.

2. Archiving: The object files are bundled together into a single file using a tool like `ar` (archiver). This creates the static library file, usually with a `.a` extension (e.g., `libmylibrary.a`).

3. Linking: When you compile a program that uses functions or classes from a static library, the linker searches the library for the necessary code. If the code is found, it's integrated into your program's executable binary. The resulting binary contains the code from both your program and the static library.

Creating a static library involves these steps:

1. Compile source code files into object files:
   ```
   gcc -c mylibrary.c -o mylibrary.o
   ```

2. Archive object files into a static library:
   ```
   ar rcs libmylibrary.a mylibrary.o
   ```

To use a static library in your program:

1. Create your program's source code files.

2. Compile your program while linking with the static library:
   ```
   gcc myprogram.c -o myprogram -L/path/to/library -lmylibrary
   ```
   Here, `-L` specifies the directory where the library is located, and `-l` specifies the name of the library without the `lib` prefix and `.a` extension.

3. Run your compiled program:
   ```
   ./myprogram
   ```


Basic usage of ar, ranlib, nm.
1. **ar** (Archiver):
   - **What it does:** `ar` is a command-line tool that bundles multiple object files into a single archive file, commonly used to create static libraries.
   - **How to use it:** You can use `ar` to create an archive (static library) and add object files to it. For example, if you have object files named `file1.o` and `file2.o`, you can create an archive named `mylib.a` like this:
     ```
     ar rcs mylib.a file1.o file2.o
     ```
   - **Why it's important:** `ar` helps organize and package related object files together for easier distribution and linking.

2. **ranlib**:
   - **What it does:** `ranlib` is a command used after creating an archive with `ar`. It generates an index for the archive, making it easier and faster for tools to locate specific content within the archive.
   - **How to use it:** After creating an archive, you can run `ranlib` on it:
     ```
     ranlib mylib.a
     ```
   - **Why it's important:** The index created by `ranlib` improves the performance of accessing content from the archive without needing to read through the entire file.

3. **nm** (Name List):
   - **What it does:** `nm` is a command that displays information about the symbols (functions, variables, etc.) defined in object files or binary executables.
   - **How to use it:** You can use `nm` to see the list of symbols in an object file or an executable. For example:
     ```
     nm mylib.a
     ```
     This will show the symbols defined in the archive.
   - **Why it's important:** `nm` helps you understand the content of object files and libraries, and it's particularly useful for diagnosing symbol-related issues during linking.



Tasks
0. A library is not a luxury but one of the necessities of life
mandatory

Create the static library libmy.a containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);




1. Without libraries what have we? We have no past and no future
mandatory

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
