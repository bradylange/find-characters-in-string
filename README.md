# find-characters-in-string
Scans the first input string for characters in the second input string and returns the first occurrence of each character or NULL if no characters are matched. Custom implementation of C library method `strpbrk`.

Brady Lange

03/12/18

Op Sys Programming

Assignment 3

## `src/my_strpbrk.c`
The character finder amongst two strings program works by using a while loop to iterate through both of the strings
that were inputted and tries to find the first match for the two strings. If no match is found `NULL` will be returned.

Input:

`a.out handle dal`

Output:

`Letters found in 'handle' using a key: a d l`