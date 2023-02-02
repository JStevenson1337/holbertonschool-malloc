#include "malloc.h"

/**
* _free - free a given heap pointer
* @ptr: pointer
* Return: none
*/
void _free(void *ptr)
{
	char *heap_pointer;
	Node_t *node;

	if (!ptr)
		return;
	else
	{
		heap_pointer = (char *)ptr - sizeof(Node_t);
		node = (Node_t *)heap_pointer;
		node->next = 0;
	}
}
