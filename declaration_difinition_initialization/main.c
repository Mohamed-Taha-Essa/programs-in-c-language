#include <stdio.h>
#include <stdlib.h>
#include

unsigned int number_1;//difinition
unsigned int nubmer_2=33;//difinition and initialization
extern unsigned int number_3;//declaration eror linker

int main()
{

    printf("number1 = %d", number_1);
    printf("nubmer 2 = %d" , nubmer_2);
    printf("number3 = %d" , number3);
    return 0;
}
