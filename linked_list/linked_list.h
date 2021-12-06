
#ifndef LINKED_LIST

#define LINKED_LIST
#include "stdtypes.h"


typedef struct node
{
    uint32_t data ;
    struct node *next ;
}node_t;



return_status_t LS_add_node_at_first (void );
return_status_t LS_add_node_at_end (void);
return_status_t LS_add_node_at_position(void);
return_status_t LS_display(void) ;
return_status_t LS_delet_node_from_first(void);
return_status_t LS_delet_node_from_end(void);
return_status_t LS_delet_node_from_position(void);







#endif // LINKED_LIST
