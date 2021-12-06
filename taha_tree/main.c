#include <stdio.h>
#include <stdlib.h>
#include"tree.h"

int main()
{
    uint32_t cou_loop = 0 ;
    for(cou_loop= 0 ; cou_loop <=7 ; cou_loop++)
         {
             add_node();
         }
    display_tree();

    search_num();
    max_num();

    printf("\nthe number of node in tree is ::-> %i",counter);
    return 0;
}
