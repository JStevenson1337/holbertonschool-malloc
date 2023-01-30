#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Program entry point
 *
 * @size: size passed in
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
void *naive_malloc(size_t size)
{
	void *ptr;

	if (size < 0)
		printf("non-positive bytes of memory at: %lu", size);

	printf("Starting break is %p\n", ptr);

	return (EXIT_SUCCESS);
}