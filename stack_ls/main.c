#include <stdio.h>
#include <stdlib.h>
#include "stack_ls.h"

int main()
{
    stack_ls_t t ;
    printf("%i\n",sizeof(t));
    push_elem();
    push_elem();
    push_elem();
    push_elem();
    push_elem();
    stack_size();
    stack_display() ;
    pop_elem();
    pop_elem();
    pop_elem();
    pop_elem();
    stack_display() ;

    return 0;
}
