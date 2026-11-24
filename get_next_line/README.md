*This project has been created as part of the 42 curriculum by vbucher*

# Description

## Global

The core function (get_next_line) return, one line at a time, the text file that is passed to it as its file descriptor (a file descriptor is obtained by applying the function open() to a file).
The function use a static pointer to store the remaining data between two calls.

The function run until there is no more data to print or an error occurs. In this case it will free all the remaining allocations an return a NULL pointer.

## Details

On the first call it allocates the static pointer that will store the read data until the last call.

After that il will search for the absence of a '\n' (the end of a line) in the static pointer and check if the read size is not 0 (end of file is already reached).
-Conditions OK  : read in a temporary pointer (and store the read size), and concatenate it in the static pointer.
-Conditions NOK : create an array that will be returned, and suppress the returned line of the static pointer.

# Instructions

Testing or using the function requires a main that will open a text file, call the function for each lines it contains and free the returned pointers evry time.

To use the program you will need to compile :
*cc -Wall -Wextra -Werror get_next_line.c get_next_line.h main.c get_next_line_utils.c*
To modify the size of each read(), add *-D BUFFERSIZE=* and the size of you choice.

Then run it:
*./a.out*

# Resources

-Manuals : understand the functions open() / close() and read().
-AI : Search for possible error case.