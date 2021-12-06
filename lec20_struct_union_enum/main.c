#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
int main()
{
    Register_8Bit_t reg1;
    reg1.sensor1 = 4;
    reg1.sensor2 = 6 ;
    printf("\n%i " , sizeof(reg1)) ;
    printf("\n%i " , reg1.sensor1) ;
    printf("\n%i \n" , reg1.sensor2);
//    pir_sensor_t  pir_sensor_value;
//
//    set_bit_value_from_user(&pir_sensor_value);
//
//
//     printf("bit1 from main =  %c \n" , pir_sensor_value.pir_sensor1);
//    print_value_reg( &pir_sensor_value) ;
    person_info_t person1 ;
    person1.degree = 25 ;
    printf("%f \n" , person1.degree ) ;
    person1.id = 22 ;
    printf("%i \n" , person1.id ) ;
    printf(" id    = 0x %x \n", &person1.id) ;
    printf(" degree = 0x %x \n" ,&person1.degree) ;
    printf ( " size of person is %i\n" , sizeof(person1));

    Register_t trisc ;
    trisc.register_full_access = 0x55 ;
    printf (" \n trisc full access 0x%x \n" , trisc.register_full_access) ;
    trisc.register_half.bit0_3 = 0xf ;
    trisc.register_half.bit4_7 = 0xa ;
    printf (" \n trisc full access 0x%x \n" , trisc.register_half.bit0_3) ;
    printf (" \n trisc full access 0x%x \n" , trisc.register_half.bit4_7) ;
    trisc.register_bits_value.bit1 = 0 ;
    trisc.register_bits_value.bit2 = 0 ;
    trisc.register_bits_value.bit3 = 1 ;
    trisc.register_bits_value.bit4 = 1 ;
    trisc.register_bits_value.bit5 = 1 ;
    trisc.register_bits_value.bit6 = 1 ;
    trisc.register_bits_value.bit7 = 0 ;
    trisc.register_bits_value.bit8 = 0 ;
        printf (" \n trisc full access 0x%x \n" , trisc.register_full_access) ;
        printf("\n============Enum======================\n");

     Timer0_prescaler_t timer0_pres = Timer0_prescaler_32 ;
     printf(" %i" ,timer0_pres) ;

     printf( "\n %i\n" ,put_timer_prescaler(timer0_pres)) ;



    return 0;
}
function_return_status_t put_timer_prescaler(Timer0_prescaler_t timer0_pres )
{
    function_return_status_t return_st = Return_fail;
    if ( Timer0_prescaler_128 == timer0_pres)
    {
       return_st = Return_pass ;
    }
    else if ( Timer0_prescaler_32 == timer0_pres )
    {
        return_st = Return_fail ;
    }
    return return_st ;
}
void print_value_reg( pir_sensor_t *reg)
{


    printf("bit1 =  %i \n" , reg->pir_sensor1);
    printf("bit2 =  %i \n" , reg->pir_sensor2);
    printf("bit3 =  %i \n" , reg->pir_sensor3);
    printf("bit4 =  %i \n" , reg->pir_sensor4);
    printf("bit5 =  %i \n" , reg->pir_sensor5);
    printf("bit6 =  %i \n" , reg->pir_sensor6);
    printf("bit7 =  %i \n" , reg->pir_sensor7);
    printf("bit8 =  %i \n" , reg->pir_sensor8);

}

void set_bit_value_from_user(pir_sensor_t *pir_sensor_value)
{

     uint8_t bit_value;
    for (int i = 0 ; i<8 ; i++)
    {
        switch (i)
            {
                case 0 :
                       {
                        printf("enter the value in bit %i:\n" ,i);
                        scanf(" %i" , &bit_value ) ;
                       pir_sensor_value->pir_sensor1  = gitvalue (bit_value) ;

                        }
                break ;
                case 1 :
                    {
                        printf("enter the value in bit %i:\n" ,i);
                        scanf(" %c" , &bit_value ) ;
                       pir_sensor_value->pir_sensor2  = gitvalue (bit_value) ;

                    }
                     break ;


                    case 2 :
                        {
                            printf("enter the value in bit 2 :\n" );
                        scanf(" %c" , &bit_value ) ;

                           pir_sensor_value->pir_sensor3  = gitvalue (bit_value) ;
                        }
                        break;
                     case 3 :
                        {
                            printf("enter the value in bit %i:\n" ,i);
                        scanf(" %c" , &bit_value ) ;
                           pir_sensor_value->pir_sensor4  = gitvalue (bit_value) ;
                        }
                        break;
                         case 4 :
                        {
                            printf("enter the value in bit %i:\n" ,i);
                        scanf(" %c" , &bit_value ) ;
                           pir_sensor_value->pir_sensor5  = gitvalue (bit_value) ;
                        }
                        break ;
                        case 5 :
                        {
                            printf("enter the value in bit %i:\n" ,i);
                        scanf(" %c" , &bit_value ) ;
                           pir_sensor_value->pir_sensor6  = gitvalue (bit_value) ;
                        }
                        break;
                       case 6 :
                        {
                            printf("enter the value in bit %i:\n" ,i);
                        scanf(" %c" , &bit_value ) ;
                           pir_sensor_value->pir_sensor7  = gitvalue (bit_value) ;
                        }
                        break ;
                        case 7 :
                        {
                            printf("enter the value in bit %i:\n" ,i);
                        scanf(" %c" , &bit_value ) ;
                           pir_sensor_value->pir_sensor8 = gitvalue (bit_value) ;
                        }
                        break ;
                  }
            }
}
uint8_t gitvalue(uint8_t num)
{
    printf("\n hi from gitvalue  \n");

    if( 5 <=num && 0 >= num )
    {
         printf("\n hi from gitvalue if  \n");
        return 0;
    }
     else if (5 > num )
    {
         printf("\n hi from gitvalue else  \n");
        return 1 ;
    }


}
