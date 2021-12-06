#include <stdio.h>
#include <stdlib.h>

char arr_name[50] = "mohamed essa";
char *ptr = "mohamed essa";
char *const ptr1 = "mohamed essa";
const char var = 'r'; // can't change
char var2 = 't';     //can change
const char *const ptr2 = &var ; //can't change

const char *const ptr3 = &var2 ;//can't change

int main()
{
/*
    printf("%s\n4" , arr_name) ;
    printf("%X \n" , arr_name) ;
    printf("%C\n" , *(arr_name)) ;
    printf("%c\n" , *(arr_name +1)) ;
    //arr_name++;compilation error
    //arr_name[10] = "" ;
    printf("%s\n" , arr_name) ;
    printf("---------------------------\n") ;
    printf("%s \n " , ptr);
    printf("%c \n " , *ptr);

    ptr ++ ;
    printf("%s\n " , ptr) ;
    ptr++ ;
    //*ptr = 'A'; eror cant over write on string

    printf("%c \n " ,*ptr);
    printf("---------------------------\n") ;
    //ptr1++; eror const
    printf("%s\n ", ptr1);
    printf("%c \n" , *(ptr1 +1));
    printf("%c \n" , (ptr1 [1]));
*/
    if (*ptr1 == 'm')
        printf("ok\n");
    else
        {
            printf("No" ) ;
        }
         if (*(ptr1+3) == 'a')
        printf("ok\n");
    else
        {
            printf("No" ) ;
        }
    return 0;
}
