#include<stdio.h>
#include <stdlib.h>
#include "circ_ls.h"

uint16_t COUNTER_NODE =0 ;

node_t *start_node = NULL ;
node_t *last_node = NULL ;

return_status_t LS_add_node_at_first (void )
{
    node_t *temp_node = NULL ;
    temp_node = (node_t*)malloc(sizeof(node_t)) ;
    if (NULL == temp_node)
    {
        printf("\nissue : no space to creat linked list\n");
        return R_NOK ;
    }
    else
    {
        printf("\nEnter node data \n");
        scanf( "%i",&temp_node->data);
        temp_node->next = NULL;

        if(NULL == start_node )
        {
            start_node = temp_node ;
            last_node = temp_node ;
            start_node->next = last_node ;
            last_node->next = start_node ;
            COUNTER_NODE ++;
            return R_OK ;
        }
        else
        {
            temp_node->next = start_node ;
            start_node = temp_node ;
            last_node->next = start_node ;
            COUNTER_NODE++;
        }

    } return R_OK ;

}
return_status_t LS_add_node_at_end (void)
{
    node_t *temp_node = NULL;
    temp_node = (node_t*) malloc(sizeof(node_t));
    if(NULL == temp_node )
    {
        printf("\nissue : no space to creat linked list\n");
        return R_NOK ;
    }
    else
    {
        printf("\nEnter node data \n");
        scanf("%i" ,&temp_node->data) ;
            temp_node->next = NULL ;
            if(  start_node == NULL)
            {
            start_node = temp_node ;
            last_node = temp_node ;
            start_node->next = temp_node ;
            last_node->next =temp_node;
             printf("\n first node added \n") ;
            COUNTER_NODE ++;
            return R_OK ;
        }

        else
        {
            last_node->next = temp_node;
            temp_node->next = start_node ;
            last_node = temp_node;
            //printf("\nnode added\n") ;
            COUNTER_NODE ++;
                      //  return R_OK ;

        }
         return R_OK ;


    }
}
return_status_t LS_add_node_at_position(void)
{
    node_t *temp_node = NULL ;
    temp_node = (node_t*)malloc(sizeof(node_t));
    uint32_t position ;
    uint32_t counter = 0 ;


    if(temp_node == NULL)
    {
     printf("\nissue : no space to creat linked list\n");
        return R_NOK ;
    }
    else
    {
        printf ("\n enter the node data \n" );
        scanf ("%i" ,&temp_node->data) ;
        temp_node->next = NULL ;

        printf ("\nEnter the position you want to enter in the new node \n");
        scanf("%i" ,&position);
         if(position == ZERO_INIT )
        {
            temp_node->next = start_node ;
            start_node = temp_node ;
                        COUNTER_NODE++;
                        return R_OK;

        }
        else if( position <= COUNTER_NODE)
        {
            node_t *temp_node_counter = start_node;

            for (counter = 0 ; counter < position -1 ;counter++)
            {
                temp_node_counter = temp_node_counter->next ;
            }
            temp_node->next = temp_node_counter->next ;
            temp_node_counter->next = temp_node ;

            COUNTER_NODE++;
            return R_OK;
        }

        else
        {
            printf("\nyou enter unvalid psition \n");
            return R_NOK ;
        }

    }
}
return_status_t LS_display(void)
{

    node_t *temp_node = NULL ;
    if(start_node== NULL || COUNTER_NODE == 0)
    {
        printf("\n issue : no node to display" );
        return R_NOK ;
    }
    else
    {
        temp_node = start_node ;
        uint16_t counter = 0 ;


        for( counter = 0 ; counter <COUNTER_NODE*2 ;counter++ )
        {

            printf("%i\t",temp_node->data);
            temp_node = temp_node->next ;
        }
        //printf("\n%i\n",COUNTER_NODE);

        return R_OK ;
    }

}
return_status_t LS_delet_node_from_first(void)
{
    if(start_node == NULL )
    {
        printf("\n issue : the linkes list is empty" );
        return R_NOK;
    }
    else
    {node_t *temp = NULL ;
    temp = start_node ;
    start_node = start_node->next;
    free(temp);
    COUNTER_NODE--;
    return R_OK ;
    }
}
return_status_t LS_delet_node_from_end(void)
{
    node_t *counter = NULL ;
    node_t *temp = NULL ;



        if(start_node == NULL)
        {
            printf("issue : the linkes list is free" ) ;
            return R_NOK ;
        }
        else
        {
            counter = start_node ;
            while(counter->next != NULL)
                {
                    temp = counter ;
                    counter = counter->next;
                }
            temp->next = NULL ;
            free(counter) ;
            COUNTER_NODE-- ;
            return R_OK ;

        }

}
return_status_t LS_delet_node_from_position(void)
{
   uint32_t num = 0 ;
     node_t *temp = NULL ;
     node_t *temp_1 = NULL ;
     if(start_node == NULL )
     {
         printf("issue : the linked list is empty "  );
         return R_NOK;
     }
     else
     {
         printf("\nEnter the positon you want to delet node\n" ) ;
         scanf("%i",&num);

         if (num <= COUNTER_NODE)
        {
         temp = start_node ;
         uint32_t counter = 0 ;
         for (counter = 0 ; counter < num-1  ; counter++)
         {
             temp = temp->next ;

         }
         temp_1 =temp->next ;
         temp->next = temp_1->next ;
         free(temp_1);
         COUNTER_NODE-- ;
         return R_OK;
        }
     }
}
