#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Program entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE

 */
int main()
{
    void *ptr;
    char str[10];

    strcpy(str, "H");

    ptr = sbrk(sizeof((char *)(ptr)));
    printf("Starting break is %p\n", ptr);


    strcat((char *)ptr, (char *)str);
    printf("Starting break is %p\n", ptr);

    return (EXIT_SUCCESS);
}
