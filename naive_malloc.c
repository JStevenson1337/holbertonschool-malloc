#include "malloc.h"
/**
* naive_malloc - reimplementation of malloc
* @size: bytes requested
* Return: SUCCESS = pointer to allocated memory; FAIL = NULL
*/
void *naive_malloc(size_t size)
{
	size_t chunk_hdr = MALIGN(size + HEADER_S);
	static size_t block;
	void *ptr;
	static void *heap_ptr;

	if (!size)
		return (NULL);
	while (block < chunk_hdr)
	{
		if (heap_ptr)
			sbrk(0);
		else
			MALLOCD_PAGE, heap_ptr = sbrk(MALLOCD_PAGE);
		block = block + MALLOCD_PAGE;
	}
	ptr = heap_ptr;
	memcpy(ptr, &chunk_hdr, sizeof(chunk_hdr));
	heap_ptr = (void *)((char *)(ptr) + chunk_hdr);
	return ((void *)((char *)(ptr) + MALIGN(HEADER_S)));
}
