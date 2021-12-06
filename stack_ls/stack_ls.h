#ifndef STACK_LS

#define  STACK_LS
#include "stdtypes.h"

typedef struct stack_ls
{
    uint32_t data ;
    struct stack_ls *next ;

}stack_ls_t;

return_status_t push_elem(void);
return_status_t pop_elem(void);
return_status_t stack_display(void);
return_status_t stack_size(void);

#endif // STACK_LS
