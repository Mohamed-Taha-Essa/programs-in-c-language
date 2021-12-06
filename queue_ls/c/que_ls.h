#ifndef QUE_LS
#define QUE_LS
#include "stdtypes.h"

typedef struct queue_ls
{
    uint32_t data ;
    struct queue_ls *next ;
}queue_ls_t;

return_status_t enqueue (void) ;
return_status_t dequeue (void) ;
return_status_t print (void) ;


#endif // QUE_LS

