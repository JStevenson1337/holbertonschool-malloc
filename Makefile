CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
TCFLAGS = -Wall -Wextra -pedantic -std=c11 -g3 -ggdb



CFLAGS=-Wall -Wextra -Werror -std=c11 -pedantic -ggdb

heap: ./nh_malloc/main.c ./nh_malloc/heap.c ./nh_malloc/heap.h
	$(CC) $(CFLAGS) -o heap ./nh_malloc/main.c ./nh_malloc/heap.c
