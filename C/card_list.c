#include "card_list.h"



int add_card(card_list_node **first, card *added) {
    card_list_node *new;
    if(!added || !first){
        return 1;
    }
    new = (card_list_node *) malloc(sizeof(card_list_node));
    if(!new){
        return 1;
    }
    new->card = added;
    new->next = *first;
    *first = new;
    return 0;
}

int remove_card(card_list_node **first, card_list_node *remove){
    card_list_node *curr;
    if(!remove || !first || !(*first)){
        return 1;
    }
    if(*first == remove){
        *first = (*first)->next;
        free(remove);
        return 0;
    }
    curr = *first;
    while(!(curr->next)){
        if(curr->next == remove){
            curr->next = remove->next;
            free(remove);
            return 0;
        }
    }
    return 1;
}
