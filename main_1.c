/* Description: `naive_malloc(10);` 10 times */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define _GNU_SOURCE
void *naive_malloc(size_t size);

/**
 * main - Program entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void) {
  int i;
  unsigned long int start;
  unsigned long int current;
  char *str;

  start = (unsigned long int)sbrk(0);
  for (i = 0; i < 10; i++) {
    str = naive_malloc(10);
    if ((unsigned long int)str % 8 != 0) {
      fprintf(stderr, "Address is not correctly aligned\n");
      return (EXIT_FAILURE);
    }
    strcpy(str, "Holberton");
    str[9] = '\0';
    printf("0x%08lx -> [%s]\n", (unsigned long int)str - start, str);
    current = (unsigned long int)sbrk(0);
    printf("Current break is 0x%lx\n", current - start);
  }
  return (EXIT_SUCCESS);
}
