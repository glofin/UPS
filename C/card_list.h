#ifndef __card_list
#define __card_list
#include "uno.h"

typedef struct _card_list_node
{
    card* card;
    struct _card_list_node *next;
} card_list_node;



int add_card(card_list_node *first, card_list_node *added);

int remove_card(card_list_node *first, card_list_node *remove);






#endif