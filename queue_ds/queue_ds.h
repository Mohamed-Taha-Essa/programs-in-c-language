#ifndef _QUEUE_DS

#define _QUEUE_DS
#include "std_types.h"
#define MAX_SIZE 5
#define ZERO 0
#define Queu_initialized -1
typedef struct Queue
{
    sint32_t  q_head  ,q_tail  ;
    uint8_t arr_que[MAX_SIZE];
}Queue_t ;
typedef enum Queue_status
{
    Q_FULL ,
    Q_NOTFULL,
    Q_EMPTY,
    Q_END
}Queue_status_t ;

ret_fun_t Q_initialization (Queue_t *x_queue) ;
ret_fun_t Enqueue (Queue_t *x_queue , sint32_t value) ;
ret_fun_t Dequeue (Queue_t *x_queue , sint32_t *vlue) ;
ret_fun_t print (Queue_t *x_queue ) ;








#endif // _QUEUE_DS
