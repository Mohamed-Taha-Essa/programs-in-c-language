
#ifndef STACK_DS_  //file guard to not repeat
#define STACK_DS_

//#include "std_types.h "


#define MAX_STACK_SIZE (100UL)
#define last_elem_stack 0UL
typedef unsigned char uint8_t ;
typedef unsigned short uint16_t ;
typedef unsigned int uint32_t ;

typedef signed char sint8_t ;
typedef signed short sint16_t ;
typedef signed int sint32_t ;

extern  uint32_t my_stack[MAX_STACK_SIZE];


typedef enum fun_ret
{
    R_NOK , //   = 0
    R_OK    //   =1
} fun_ret_t;


typedef enum stack_current_status
{
    STACK_NOT_FULL,
    STACK_FULL,
    STACK_EMPTY
}stack_current_status_t;


fun_ret_t push_elem(uint32_t my_stack[] ,uint32_t elem) ;
fun_ret_t pop_elem(uint32_t my_stack[] , uint32_t *elem);
fun_ret_t print_stack( uint32_t my_stack[]) ;








#endif // STACK_DS_
