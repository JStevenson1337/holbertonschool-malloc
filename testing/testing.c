#include <assert.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>


#define HEAP_CAPACITY 64000
#define HEAP_ALLOCED_CAP 1024
#define HEAP_FREED_CAP 1024

typedef struct
{
	void *start;
	size_t size;

} Heap_Chunk;


char heap[HEAP_CAPACITY] = {0};

size_t heap_size = 0;

Heap_Chunk heap_alloced[HEAP_ALLOCED_CAP] = {0};
size_t heap_alloced_size = 0;

Heap_Chunk heap_freed[HEAP_FREED_CAP] = {0};
size_t heap_freed_size = 0;



void *heap_alloc(size_t size)
{
	if (size > 0)
	{
		assert(heap_size + size <= HEAP_CAPACITY);
		void  *result = heap + heap_size;
		heap_size += size;

		const Heap_Chunk chunk =
		{
			.start = result,
			.size = size,
		};

		assert(heap_alloced_size <= HEAP_ALLOCED_CAP);
		heap_alloced[heap_alloced_size++] = chunk;

		return (result);
	}
	else
		return NULL;
}



void heap_dump_alloced_chunks(void)
{
	printf("Alocated Chunks: %zu\n", heap_alloced_size);
	for (size_t i =0; i < heap_alloced_size; ++i)
	{
		printf("   stat: %p\t\tsize: %zu\n", 
				heap_alloced[i].start,
				heap_alloced[i].size);
	}
}

int chunk_list_find(const Chunk_List *list, void *ptr)
{
	assert(false && "TODO: chunk_list_find is not implemented");
	return -1;
}



int chunk_list_insert(Chunk_List *list, void *ptr, size_t size)
{
	assert(false && "TODO: chunk_list_insert is not implemented");
}

int chunk_list_remove(Chunk_List *list, size_t index)
{
	assert(false && "TODO: chunk_list_remove is not implemented");
}

/* O(Alloced) */
void heap_free(void *ptr)
{
	for (size_t i = 0; i < heap_alloced_size; ++i)
	(void) ptr;

	assert(false && "TODO: heap_free is not implemented");
}



void heap_collect()
{
	assert(false && "TODO: heap_collect is not implemented");


}


int main()
{
	/* char *root = heap_alloc(26); */

	for (int i = 0; i < 100; i++)
	{
		void *p = heap_alloc(i);
		if (i %2 == 0)
		{
			heap_free(p);
		}
	}


	heap_dump_alloced_chunks();

	return 0;
}
