#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


int main()
{
    LS_add_node_at_end();LS_display() ;
    LS_add_node_at_end();LS_display() ;
    LS_add_node_at_end();LS_display() ;

    LS_add_node_at_first() ; LS_display();
    LS_add_node_at_first() ; LS_display();
    LS_add_node_at_first() ; LS_display();

    LS_add_node_at_position();LS_display();
    LS_add_node_at_position();LS_display();

    LS_delet_node_from_end();LS_display();
    LS_delet_node_from_first() ;LS_display();
    LS_delet_node_from_position();LS_display();

    return 0;
}
