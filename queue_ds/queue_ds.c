
#include "queue_ds.h"
static Queue_status_t q_is_full(Queue_t *x_queue)
{
    if ((x_queue->q_head == x_queue->q_tail+1 )||
        (x_queue->q_tail == MAX_SIZE-1 && x_queue->q_head == ZERO))
    {
        printf("YOUr Queue is Full \n ");
        return Q_FULL;
    }
    else
    {
        return Q_NOTFULL ;
    }


}
static Queue_status_t q_is_empty(Queue_t *x_queue)
{
if ((x_queue->q_head == Queu_initialized) &&
    ( x_queue->q_tail== Queu_initialized) )

    {
        printf("YOUr Queue is Empty \n ");
        return Q_EMPTY;
    }
    else
    {
        return Q_NOTFULL;
    }


}


ret_fun_t Q_initialization (Queue_t *x_queue)
{
    x_queue->q_head = Queu_initialized ;
    x_queue->q_tail = Queu_initialized ;

}


ret_fun_t Enqueue (Queue_t *x_queue , sint32_t value)
 {

    if (q_is_full(x_queue) == Q_FULL)
    {
        printf ("\n your queue is full I can't add (%i) to the queue :" , value);
        return Q_NOK ;
    }
    else
    {
        if (q_is_empty(x_queue) == Q_EMPTY )
            {
                //printf("AML\n") ;
                x_queue->q_head  = ZERO ;
                x_queue->q_tail = ZERO ;
            }
        else
            {
                x_queue->q_tail = (x_queue->q_tail + 1)% MAX_SIZE ;

            }
            x_queue->arr_que[x_queue->q_tail] = value  ;
            printf("%i is added to queue\n" , value ) ;
            return Q_OK ;
    }

 }

ret_fun_t Dequeue (Queue_t *x_queue , sint32_t *value)
{
    if(q_is_empty(x_queue) == Q_EMPTY)
    {
        printf("\nyour queue is empty we don't find any value\n ");
        return Q_NOK ;
    }
    else
    {
        *value = x_queue->arr_que[x_queue->q_head] ;
        if(x_queue->q_head == x_queue->q_tail)
        {
            x_queue->q_head = -1 ;
            x_queue->q_tail = -1 ;
        }
        else
        {
            x_queue->q_head = (x_queue->q_head + 1)%MAX_SIZE ;

        }

    }
    return Q_OK ;

}
ret_fun_t print (Queue_t *x_queue )
{
     sint32_t q_counter = ZERO ;
    if(q_is_empty(&x_queue) == Q_EMPTY )
    {
        printf("the queue is empty no elemt to print \n") ;
    }
    else
        {



              printf("\nData : ");


           for(q_counter = x_queue->q_head ; q_counter != x_queue->q_tail ;q_counter=(q_counter+1)%MAX_SIZE)
            {

                printf("%i\t " , x_queue->arr_que[q_counter]) ;
            }
            printf("%i\t " , x_queue->arr_que[q_counter]) ;
          printf("\n ");
        }
        return Q_OK ;




}




