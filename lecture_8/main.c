#include "includes.h"
#define VAR 33
unsigned  int number1= 66;
const int var = 44;

/*extern unsigned int number_2 ;
extern void lcd_3(void);*/
int main()
{
    //radix
    int var_3 = 0Xfac5;
    int var_4 = 0b10101101;
    int var_5 = 0342;
    int var_6 = 554l;
    printf("var_3 = %x \n" , var_3);
    printf("var_4 = % \n" , var_4);
    printf("var_5 = %d \n" , var_5);
    //this is sffix
    unsigned int var_1 = 55U;
    unsigned int var_2 = var_1 + 5u;//it's a good prctis integer literal
    printf("var_2 = %d \n", var_2) ;
    number1 = 55 ;
    printf("number1 =%d\n", number1);
    printf("number2 =%d\n", number_2);
    print_lcd_3();
    prit_valu_pi();
    printf("var = %d \n",&var);
    printf("VAR = %d \n",VAR);//printf("VAR = %d \n",&VAR);eror as here did text replacment to VAR -> &33


    printf(" long = %d \n",sizeof(long));
    printf(" int =  %d \n",sizeof(int));
    printf(" char = %d \n",sizeof(char));
    printf(" float = %d \n",sizeof(float));
    printf(" double = %d \n",sizeof(double));

    //using suffix
    int test_1 = 5;
    //double test_2 = 5d ;invalid suffix
    double test_2 = 2.3d;
    return 0;
}
