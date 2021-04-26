#include <stdlib.h>
#include <string.h>

#include "linked_list.h"

/**
* list_init
**/
void list_init (List *list, void (*destroy)(void *data))
{
	list->size = 0;
	list->destroy = destroy;
	list->head = NULL;
	list->tail = NULL;
	return;
}

/**
* list_destroy
**/
void list_destroy (List *l)
{
    void *data;
    // remove each element
    while(list_size(l) > 0)
    {
        if(list_rem_next(l, NULL, (void**)&data) == 0 && l->destroy != NULL)
        {
            // calls the user defined function to free allocated data.
           l->destroy(data);
        }
    }

    // clear as precaution
    memset(l, 0, sizeof(List));
}

