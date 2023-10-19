#ifndef __uno
#define __uno

#include <stdlib.h>
#include "card_list.h"


#define red 1
#define yellow 2
#define blue 3
#define green 4

typedef struct _card {
    int colour;
    int number;
} card;


typedef struct _player {
    char  nickname[15];
    char ip[20];
    int stage; /*-1 -> odpojen, 1 -> pripojen beze jmena, 2 -> pojmenovany v lobby, 3 -> pripojen k roomce, 4 -> ve hre*/
    card_list_node * card_list;
} player;

#endif
