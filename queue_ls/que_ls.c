#include <stdio.h>
#include <stdlib.h>
#include "que_ls.h"

queue_ls_t *start_node = NULL ;
queue_ls_t *last_node = NULL ;
uint8_t counter = 0;

 return_status_t enqueue (void)
{
    queue_ls_t *temp = NULL ;
    temp = (queue_ls_t*) malloc(sizeof(queue_ls_t ));
    if (start_node == NULL)
    {
        printf("this is the first elem in queue Enter the data in queue\n");
        scanf("%i",&temp->data) ;
        start_node = temp  ;  start_node->next = NULL ;
        last_node = temp   ;  last_node->next = NULL ;
        counter++ ;
        //printf("%x\t%x\t%x\n" ,start_node , last_node,temp) ;
       // printf("%i\n" ,temp->data) ;

        //printf("%i\n" ,start_node->data) ;
        return R_OK;
    }
    else
    {
        printf("Enter the data in queue\n");
        scanf("%i",&temp->data) ;
        last_node->next = temp ;
        last_node = temp;
        last_node->next = NULL ;
        counter++ ;
        return R_OK;

    }
}
return_status_t dequeue (void)
{
    if(start_node == NULL)
    {
        printf("issue :the queue is free");
        return R_NOK ;
    }
    else
    {
        queue_ls_t *temp ;
        temp = start_node ;
        start_node = start_node->next ;
        printf("\n%i\n",temp->data);
        free(temp);
        counter-- ;
        return R_OK ;
    }
}
return_status_t print (void)
{
    if(start_node == NULL)
    {
        printf("issue no node to print \n " );
        return R_NOK ;
    }
    else
    {
        queue_ls_t *temp = NULL;
        temp =  start_node ;
        if(temp == last_node)
            {
                printf("%i\n" ,temp->data);
            }
        else
        {
            while (temp != last_node)
           {
            printf("%i\t",temp->data );
             temp = temp->next ;
          }
          printf("\t%i\n",last_node->data);
        }
        return R_OK ;
    }

}
