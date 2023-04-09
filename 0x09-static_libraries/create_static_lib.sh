#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcs libwork.a *.o
ranlib libwork.a
