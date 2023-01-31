CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
TCFLAGS = -Wall -Wextra -pedantic -std=c11 -g3 -ggdb



CFLAGS=-Wall -Wextra -Werror -std=c11 -pedantic -ggdb

heap: main_1.c naive_malloc.c malloc.h
	$(CC) $(CFLAGS) -o heap main_1.c naive_malloc.c
