#include <stdio.h>
#include <stdlib.h>
typedef struct Register_8bit
{
    unsigned char sensor1:4 ;
    unsigned char sensor2 : 4 ;

}register_8bit_t;
register_8bit_t reg1 ;
register_8bit_t reg2 ;
int main()
{
    reg1.sensor1 = 12;
    reg1.sensor2 = 10 ;
    printf("%i \n" , sizeof(reg1));
    printf("0x%x\n" , reg1.sensor1);
    printf("0x%x\n" , reg1.sensor2);
    return 0;
}
