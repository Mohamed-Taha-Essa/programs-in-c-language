#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main()
{

    char  const first[20] = "thaflasdkjfa" ;
    char   second[] = "TAHA" ;
//    printf("%s\n" , source);
//    printf("%s\n" , target);

//   my_strcat(source , target) ;
//   printf("%s \n" ,source) ;


//    my_strncat(source , target , 2 ) ;
//    printf("%s", target) ;


   // my_strcopy (source , target ) ;
    //printf("%s " , target);

//my_strncopy (second , first , 4 ) ;
//    printf("%s " , second);

//int num = my_comparison_str (first,second ) ;
//    printf("%i " , num);
  char *p;


    p = my_strrchar(first,'a');
    printf("this character is found at position %d\n", p);
        return 0;
}
char* my_strstr(const char* first , const char* second)
{
    char * temp ;


        for (int i = 0 ; first[i] == second[i] ; i++)
           {
               if (i+1 == sizeof(second ))
               {
                   temp = &first[i];
               }
           }
    return temp l
}
char* my_strrchar(const char* first , int str)
{
    char *temp = first ;
    char counter = 1 , counter2 = 1   ;

    while (*first != '\0')
    {
        if(*first == str)
        {
            temp = first;
            counter2 = counter ;
        }
        first++;
        counter++;
    }
    return counter2 ;
}
char* my_strchar(const char* first , int str)
{
    char *temp = first ;
    char counter = 0 ;
    while (*temp != str)
    {
        temp++;
        counter++;
    }
    return counter;
}
int my_strcmpi(const char*first , const char*second)
{
    int x = my_str_len(first) ;
    printf("length of first string is : %i\n" , x) ;
    int y = my_str_len(second) ;
    printf("length of second string is :%i\n" , y) ;
    int counter ;
    int var =0 ;
    if(x == y  )
    {
        for(counter = 0 ;counter < x ; counter ++ )
        {
            if( first[counter]  == second[counter]   )
            {
               var++;
            }
            else if(first[counter]-second[counter] == 32)
            {
                var++ ;
            }
             else if(second[counter] - first[counter] == 32)
            {
                var++ ;
            }
        }
        if (var == counter)
        {
            return 0 ;
        }

    }
    else if(x > y )
    {
        return 1 ;
    }
    else
    {
        return -1 ;
    }
}
//Returns 0 if str1 is same as str2. Returns <0 if strl < str2. Returns >0 if str1 > str2
int my_strmp(const char*first , const char*second)
{
    int x = my_str_len(first) ;
    printf("%i\n" , x) ;
   int y = my_str_len(second) ;
        printf("%i\n" , y) ;
    int counter ;
    if(x == y  )
    {

        return 0 ;
    }
    else if(x > y )
    {
        return 1 ;
    }
    else
    {
        return -1 ;
    }
}
//return length of string
int my_str_len(char *first )
{
    int counter = 0;
    while(*first!= '\0')
    {
        counter ++ ;
        first++ ;
    }
    return counter ;
}
//Copies given number of characters of one string to another
void my_strncopy(char *first , char *second , int num )
{
    int counter ;
    for(counter = 0 ; counter < num ; counter ++)
    {
        first[counter]  = second[counter] ;
    }
}
  //Copies str2 into str1
void my_strcopy(char *first , char *second)
{
    while(*first != '\0')
    {
        *second = *first;
        second ++;
        first++  ;
    }
}
//Concatenates str2 at the end of str1
void my_strcat(char *first , char *second)
{
     while( *first != '\0')
        {
            first ++ ;
        }
     while(*second !='\0')
     {
         *first = *second ;
         first++ ;
         second ++ ;
     }
}
//Appends a portion of string to another
void my_strncat(char *first , char const *second , int num )
{
    char *ptr = second ;
    while (*ptr != '\0')
    {
        ptr++;
    }
    printf("%s \n" , *ptr) ;
    int counter ;

    for (counter = 0 ; counter < num ; counter ++  )
    {
        *ptr = *first ;
        ptr++ ;
        first++ ;


    }
    *ptr = '\0' ;


}

