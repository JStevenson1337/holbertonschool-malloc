CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
TCFLAGS = -Wall -Wextra -pedantic -std=c11 -g3


heap: testing.c
	$(CC) $(TCFLAGS) -o Testing_heap testing.c
