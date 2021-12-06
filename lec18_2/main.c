#include <stdio.h>
#include <stdlib.h>
unsigned int nums1[5] = {1,2,3,4,5};
unsigned int nums2[5] = {6,7,8,9,10};
int *pnums[2] = {nums1 , nums2};
char *const pnames[3] = {"ahmed" , "ali " , "ramy " } ;

int num = 55 ,*pnum = &num , **ppnum = &pnum  ;

int main()
{
     pnum = &num ;
         printf("0x%x\n" ,&num);

    printf("0x%x\n" ,pnum);
    printf("0x%x\n" ,&pnum);
    printf("%i\n" ,*pnum);
    printf("0x%x\n" ,ppnum);
    printf("0x%x\n" ,*ppnum);
        printf(" 0x%x\n" ,*ppnum);

    printf("%i\n" ,**ppnum);


    /*printf("%x\n" ,pnums[0]);//address first element
        printf("%i\n" ,*pnums[0]);
            printf("%x\n" ,pnums[1]);
                printf("%i\n" ,*pnums[1]);


    pnums[0]+=3;
   printf("%i\n" ,*pnums[0]);
   printf("0x%x\n" ,pnums);
   printf("0x%x\n" ,pnums[0]);
   printf("0x%x\n" ,nums1);
   printf("%s\n" , pnames[0]);
      printf("%s\n" ,pnames[0]);
         printf("%s\n" ,pnames[1]);
 */
/* int counter ;
 for(counter = 0 ; counter <3 ; counter++)
 {
     printf("%s\n " , pnames[counter]) ;
 }
*/
    return 0;
}
