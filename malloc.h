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

typedef struct Header
{
    struct Header *next;
    struct Header *prev;
    size_t size;
    BITMAP BITS;
} Header;

typedef struct BITMAP
{
    uint8_t HEADBITS;
    uint8_t TAILBITS;
} BITMAP;

#define static Header root;
#define static Header *toor = NULL;



void *naive_malloc(size_t size);
void *_malloc(size_t size);
void _free(void *ptr);
void *_calloc(size_t nmemb, size_t size);
void *_realloc(void *ptr, size_t size);
#endif