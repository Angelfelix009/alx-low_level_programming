#!/bin/bash
cp -r 0-isupper.c 0-strcat.c 1-isdigit.c 1-strncat.c 2-strlen.c 3-islower.c 3-strcmp.c 4-isalpha.c 5-strstr.c 9-strcpy.c _putchar.c 0-memset.c 100-atoi.c 1-memcpy.c 2-strchr.c 2-strncpy.c 3-puts.c 3-strspn.c 4-strpbrk.c 6-abs.c
gcc -c *.c
ar -rc liball *.o
ranlib liball.a
