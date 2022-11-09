#!/bin/bash
cp -r 0x09-static_libraries/0-isupper.c 0x09-static_libraries/0-strcat.c 0x09-static_libraries/1-isdigit.c 0x09-static_libraries/1-strncat.c 0x09-static_libraries/2-strlen.c 0x09-static_libraries/3-islower.c 0x09-static_libraries/3-strcmp.c 0x09-static_libraries/4-isalpha.c 0x09-static_libraries/5-strstr.c 0x09-static_libraries/9-strcpy.c 0x09-static_libraries/_putchar.c 0x09-static_libraries/0-memset.c 0x09-static_libraries/100-atoi.c 0x09-static_libraries/1-memcpy.c 0x09-static_libraries/2-strchr.c 0x09-static_libraries/2-strncpy.c 0x09-static_libraries/3-puts.c 0x09-static_libraries/3-strspn.c 0x09-static_libraries/4-strpbrk.c 0x09-static_libraries/6-abs.c
gcc -c *.c
ar -rc liball *.o
ranlib liball.a
