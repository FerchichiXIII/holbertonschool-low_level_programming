#!/bin/bash
# creates a dynamic library called liball.so from all the .c files that are in the current directory.

gcc -Wall -pedantic -Werror -Wextra *.c -c -fPIC
gcc -Wall -pedantic -Werror -Wextra *.o -shared -o liball.so
