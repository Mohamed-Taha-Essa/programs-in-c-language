#include <stdio.h>
#include <stdlib.h>
#include <bits.h>
char* binbin (int n ) ;
int main()
{
   int x ,a ,r ;
   a  = 5 ;
   r = 170 ;

  printf("%s %3d",binbin(a) , a ) ;
//  char bin[9];
//  int n = 1;
//  for(x=0;x<8;x++)
//     {
//     bin[x] = n & 0x08 ? '1':'0';
//        n<<=1;
//     }
//     bin[x] ="";
//     for(x = 0 ;x<8 ; x++)
//     {
//         printf("%i",bin[x]);
//     }
//
}
char* binbin(int n )
{
    static char bin[9];
     int x;
     for(x=0;x<8;x++)
     {
     bin[x] = n & 0x80 ? '1' : '0';
     n <<= 1;
     }
     bin[x] ="";
     return(bin);
}
