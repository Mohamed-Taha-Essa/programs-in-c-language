#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint32_t ;
uint32_t *ptr ,counter ,num ;
typedef struct node
{
    struct node_t *next ;
    uint32_t value ;
    uint32_t value1 ;
    uint32_t value2 ;
    uint32_t value3 ;
    //uint32_t value4 ;



    struct node_t *next1 ;
    //struct node_t *next1 ;
}node_t;

int main()
{

    printf ("%i \n " , sizeof (node_t ));
    printf ( "enter the number you want te save it \n" ) ;
    scanf("%i " , &num ) ;

    ptr = (uint32_t *)malloc( num * sizeof(uint32_t) ) ;
    if(ptr ==NULL)
    {
        printf("heap is complete \n " ) ;
        exit(0) ;
    }
    else
    {
        for(counter = 0 ; counter < num ; counter ++ )
           {
            printf("enter your num \n" ) ;
            scanf("%i" , &ptr[counter]) ;
           }
           printf("data \n");
           for(counter = 0 ; counter < num ; counter ++ )
           {

            printf("%i \t" , ptr[counter]) ;
           }
           free (ptr);
        }
    return 0;
}
