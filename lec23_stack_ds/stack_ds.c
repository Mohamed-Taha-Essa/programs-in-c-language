
#include "stack_ds.h"

sint32_t stack_pointer = -1 ;
uint32_t my_stack[MAX_STACK_SIZE];

static stack_current_status_t is_stack_full(void )
{
    if(stack_pointer == MAX_STACK_SIZE -1 )
    {
        return STACK_FULL ;
    }
    else
        return STACK_NOT_FULL ;

}
static stack_current_status_t is_stack_empty(void)
{
    if(-1 == stack_pointer )
    {
        return STACK_EMPTY ;
    }
    else
        return STACK_NOT_FULL;
}

fun_ret_t push_elem(uint32_t my_stack[] ,uint32_t elem)
{
    if(is_stack_full() ==   STACK_FULL)
    {
        printf("CAN't add element %i \n" , elem) ;
        return R_NOK ;
    }
    else
    {
        stack_pointer ++ ;
        my_stack[stack_pointer] = elem ;
    }
    return R_OK;
}
fun_ret_t pop_elem(uint32_t my_stack[] , uint32_t *elem)
{
    if(is_stack_empty() == STACK_EMPTY)
    {
        printf("\n stack is empty \n");
        return R_NOK ;
    }
    else
    {
        *elem = my_stack[stack_pointer] ;
        stack_pointer -- ;
    }
    return R_OK ;
}
fun_ret_t print_stack( uint32_t my_stack[])
{
    sint32_t counter_stack = 0  ;
    if(is_stack_empty() ==  STACK_EMPTY)
    {
        printf ("can't find elem to print \n " ) ;
        return R_NOK ;
    }
    else
    {
        for (counter_stack = stack_pointer ;counter_stack>= last_elem_stack ;counter_stack--)
        {
                printf("%i \t" , my_stack[counter_stack]);
        }
        printf("\n");
    }
    return R_OK ;
}

