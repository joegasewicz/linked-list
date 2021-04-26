#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>


typedef struct ListElement_ {
	void			*data;
	struct ListElement_	*next;
} ListElement;

typedef struct List_ {
	int		size;
	int		(*match)(const void *key1, const void *key2);
	void		(*destroy)(void *data);
	ListElement	*head;
	ListElement	*tail;
} List;

void list_init(List *list, void (*destroy)(void *data));

void list_destroy(List *list);

int list_ins_next(List *list, ListElement *element, const void *data);

int list_rem_next(List *list, ListElement *element, void **data);

int list_size(const List *list);

ListElement *list_head(const List *list);

ListElement *list_tail(const List *list);

int list_is_head(const ListElement *element);

int list_is_tail(const ListElement *element);

void *list_data(const ListElement *element);

ListElement *list_next(const ListElement *element);

#endif // LINKED_LIST_H

