#ifndef MALLOC_H
#define MALLOC_H

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/cdefs.h>
#include <sys/types.h>
#include <err.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sysexits.h>
#include <unistd.h>
#include <assert.h>

#ifndef PAGESIZE
#define PAGESIZE 3 * sysconf(_SC_PAGESIZE); /* size of mem requsted during syscall to resieve from the kernal 12288 bytes*/
#endif

#define BLOCK(ptr) ((void *)((unsigned long)ptr + sizeof(block_t)))

/**
 *
 *
 *
 *
 */
 typedef struct Block
{
    struct Block *next;;
    struct Block *prev;
    size_t *size;
} Block_t;

typedef struct BITMAP
{
    size_t size;
    uint8_t HEADBITS;
    uint8_t TAILBITS;
} BITMAP_t;

#define Block_t -> *size = Bitmap_t -> &size;


#define static Header root;
#define static Header *toor = NULL;



void *naive_malloc(size_t size);
void *_malloc(size_t size);
void _free(void *ptr);
void *_calloc(size_t nmemb, size_t size);
void *_realloc(void *ptr, size_t size);
#endif