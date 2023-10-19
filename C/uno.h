#ifndef __uno
#define __uno

#include <stdlib.h>
#include "card_list.h"


#define red 1
#define yellow 2
#define blue 3
#define green 4

typedef struct _card
{
    int colour;
    int number;
} card;


typedef struct _player
{
    card_list_node * card_list;
} player;



#endif
