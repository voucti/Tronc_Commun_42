*This project has been created as part of the 42 curriculum by vbucher*

# Description

## get_next_line

The core function (get_next_line) return, one line at a time, the text file that is passed to it as its file descriptor (a file descriptor is obtained by applying the function open() to a file).
The function use a static pointer to store the remaining data between two calls.



## get_next_line_bonus

The function in the bonus part does the exact same thing as the standard function but it is capable to handle multiple files at the same time.
To do so the static point is now a static double pointer, wich has an index for each different file descriptor.

# Instructions


# Resources

-Manuals : understand the functions open() / close() and read().
-AI : Format this readme and correct its syntax. Search for possible error case.