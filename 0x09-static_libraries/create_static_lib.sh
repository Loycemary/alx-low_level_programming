#!/bin/bash

gcc -c 1-memcpy.c 4-strpbrk.c 2-strchr.c 5-strstr.c 0-memset.c 3-strcmp.c 2-strncpy.c 1-strncat.c 0-strcat.c 100-atoi.c 9-strcpy.c 3-islower.c 4-isalpha.c 6-abs.c 1-isdigit.c 0-isupper.c 3-puts.c 3-strspn.c 2-strlen.c _putchar.c

ar -cvq liball.a 1-memcpy.o 4-strpbrk.o 2-strchr.o 5-strstr.o 0-memset.o 3-strcmp.o 2-strncpy.o 1-strncat.o 0-strcat.o 100-atoi.o 9-strcpy.o 3-islower.o 4-isalpha.o 6-abs.o 1-isdigit.o 0-isupper.o 3-puts.o 3-strspn.o 2-strlen.o _putchar.o

