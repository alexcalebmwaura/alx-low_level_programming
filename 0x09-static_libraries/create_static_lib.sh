#!/bin/bash
gcc -Wall -pedantaic -Werror -Wextra -c *.c
ar cr liball.a *.o
ranlib liball.a
