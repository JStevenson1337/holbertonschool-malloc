#ifndef __MALLOC_H__
#define __MALLOC_H__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define MALIGN(x) ((8 - 1 + x) & ~(8 - 1))

#define MALLOCD_PAGE sysconf(_SC_PAGESIZE)

#define HEADER_S sizeof(size_t)

void *naive_malloc(size_t size);
void *_malloc(size_t size);
void _free(void *ptr);


#endif /* __MALLOC_H__ */