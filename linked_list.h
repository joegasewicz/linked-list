#include <stdio.h>


struct List{

}

struct ListElement{

}

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


