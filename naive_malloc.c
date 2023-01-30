#include <stdlib.h>
#include <stdio.h>
#include <sys/cdefs.h>
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

	size = sizeof(ptr) * size + 1;
	if (size == 0)
		printf("Size = %lu\n", size);
		EXIT_FAILURE;
	ptr = sbrk(size);
	printf("Starting Break is %lu\n", (size_t)ptr);
	return (ptr);
}