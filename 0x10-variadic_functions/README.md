@Author Gitau Muguro
This folder deals with variadic functions.
Variadi functions are functions that take a variable number of arguments, i,e the number
of arguments to be passed could not be know at function declarations.
the 'stdarg.h' header file allows function to accept an indefinite number or arguments.
this header file has the following macros:-
			va_list  ->type for iterating arguments.
			va_start -> start iterating argumenst with va_list.
			va_arg   -> Retreive an argument
			va_end   -> Free va_list.
			va_copy  -> copy content of one va_list to another.

