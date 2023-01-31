#include "malloc.h"

/**
* naive_malloc -  basic malloc
* @size: number of bytes required to allocate
* Return: a pointer to memory allocated on success, NULL otherwise
*/
void *naive_malloc(size_t size)
{
    void *start = {0},  *heapptr = NULL;
    size_t page_size;

    page_size = sysconf(_SC_PAGESIZE);

    if (size == 0)
        return (NULL);

    if (!start)
    {
        heapptr = sbrk(page_size);
        assert(heapptr != ((void *) -1) || heapptr != NULL);

        start = heapptr;
        memmove(heapptr, start, page_size);


        printf("heap = %p\t start = %p\t pagesize = %lu\n",
                   heapptr, start, (unsigned long int)page_size);
        printf("heap = %lu\t start = %lu\t pagesize = %lu\n",
                   sizeof(heapptr), sizeof(start), (unsigned long int)page_size);




    }
    return (0);

}



// int main()
// {
//     size_t var = 60;

//     naive_malloc(var);
//     return (0);
// }
