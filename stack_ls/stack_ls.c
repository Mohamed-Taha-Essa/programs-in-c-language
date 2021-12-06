#include <stdio.h>
#include <stdlib.h>

#include "stack_ls.h"

stack_ls_t *stack_pointer = NULL ;

return_status_t push_elem(void)
{
    uint32_t elem ;
    stack_ls_t *temp ;
    temp =(stack_ls_t*) malloc(sizeof(stack_ls_t));
    if(NULL == temp){
        printf("Issue : No Space to create your stack !!\n");
        return R_NOK;
    }
    else
    {
    printf("\nEnter the element \n" );
    scanf("%i" ,&temp->data) ;

    if(stack_pointer == NULL)
    {
        stack_pointer = temp ;
        stack_pointer->next = NULL ;

    }
    else
    {
        temp->next = stack_pointer ;
        stack_pointer = temp ;

    }
    return R_OK ;
    }
}
return_status_t pop_elem(void)
{
    stack_ls_t *temp ;
    if(stack_pointer == NULL)
    {
        printf("\nissue : no element to pop\n");
        return R_NOK ;
    }
    else
    {
        temp = stack_pointer ;
        stack_pointer = stack_pointer->next ;
        printf("%i:: is deleted from stack \n" ,temp->data);
        free(temp) ;
        return R_OK ;

    }
}

return_status_t stack_display(void)
{
    stack_ls_t *temp ;
     if(stack_pointer == NULL)
    {
        printf("\nissue : no element to pop\n");
        return R_NOK ;
    }
    else
    {
        temp = stack_pointer ;
        while(temp != NULL )
        {
            printf("%i  \t" ,temp->data);
            temp = temp->next ;
        }
        printf("\n");
        return R_OK ;
    }
}
return_status_t stack_size(void)
{
     stack_ls_t *temp ;
     uint8_t counter = 0 ;
     temp = stack_pointer ;
        while(temp != NULL )
        {
            temp = temp->next ;
            counter++;
        }
        printf("\n size of stack = %i\n" ,counter);
        printf("\n size of stack = %i\n" ,sizeof(stack_ls_t)*counter);
        return R_OK ;
}
