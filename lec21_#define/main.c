#include <stdio.h>
#include <stdlib.h>
#include "main.h "
unsigned int arr[STACK_SIZE] ;
int main()
{
    #ifdef VAL
     printf("Val = %i \n " , VAL) ;
    #endif
   #ifdef PI
   printf("PI  =  %i \n " , PI) ;
   #endif // PI

   printf ( "stacksize = %i\n ", STACK_SIZE) ;
   printf ("name is %s\n" , TAHA_NAME) ;

   printf ("TT = %i \n " , VV);

   printf ("the max number is : %i \n  " ,MAX_NUMBER(5 ,9 )  );
   PRINT_NAME("taha" ,"ESSA " ) ;

    return 0;
}
