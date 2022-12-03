# ft_printf
Because ft_putnbr() and ft_putstr() aren’t enough
=========

ft_printf is a custom implementation of the `printf` function from the standard C
library. It formats and prints a string to the standard output stream using a
specified format string and variable number of arguments.

Building ft_printf
-----------------

To build ft_printf, run the following commands from the root of the project directory:
$ make

This will compile the source code for the ft_printf library and create a static
library file called `libftprintf.a` in the `lib` directory.

Using ft_printf
---------------

To use ft_printf in your own C programs, you can either link the `libftprintf.a`
library file directly, or you can include the ft_printf header file in your
source code and compile your code with the `-I` option to specify the location
of the ft_printf header file.

For example, to compile a C source file `my_program.c` that uses the ft_printf
function, you could use the following command:

$ gcc -I libftprintf/includes -o my_program my_program.c libftprintf/libftprintf.a


This will compile `my_program.c` and link it with the ft_printf library. The
`-Ilibftprintf/includes` option specifies the location of the ft_printf header
file, and the `libftprintf/libftprintf.a` specifies the location of the
ft_printf library file.
