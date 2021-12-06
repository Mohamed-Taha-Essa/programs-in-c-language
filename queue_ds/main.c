#include <stdio.h>
#include <stdlib.h>
#include "queue_ds.h"
Queue_t que ;
sint32_t *value ;
int main()
{

    Q_initialization(&que);
    Enqueue(&que , 11);print(&que) ;



   Enqueue(&que , 22);print(&que) ;
    Enqueue(&que , 33);print(&que) ;
    Enqueue(&que , 44);print(&que) ;
   Enqueue(&que , 55);print(&que) ;
   //Enqueue(&que , 66);print(&que) ;
   Dequeue(&que ,&value) ;printf(" the value  is :%i \n" , value) ;
   Dequeue(&que ,&value) ;printf(" the value  is :%i\n " , value) ;
   Dequeue(&que ,&value) ;printf(" the value  is :%i \n" , value) ;
    print(&que) ;
     Enqueue(&que , 77);print(&que) ;
    Enqueue(&que , 88);print(&que) ;
    Enqueue(&que , 99);print(&que) ;
   Enqueue(&que , 100);print(&que) ;


    return 0;
}
