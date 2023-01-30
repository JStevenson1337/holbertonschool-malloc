#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Program entry point
 *
 * size: size passed in
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
void *_malloc(size_t size);
{
    void *ptr;
    size = sizeof(ptr);

    ptr = sbrk(0);
    printf("Starting break is %p\n", ptr);

    return (EXIT_SUCCESS);
}


