#include <stdlib.h>
#include <string.h>

#include "linked_list.h"

/**
* list_init
*/
void list_init(List *list, void (*destroy)(void *data))
{
	list->size = 0;
	list->destroy = destroy;
	list->head = NULL;
	list->tail = NULL;
	return;
}

