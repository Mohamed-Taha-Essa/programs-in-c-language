#include <stdio.h>
#include <stdlib.h>
#include "lcd.h"

static void print_lcd4_bit (uint8_t data )
{
    printf("print_lcd4_bit =%i \n",data);
}
static void print_lcd8_bit (uint8_t data )
{
        printf("\nprint_lcd8_bit = %i\n",data);


}void print_lcd (uint8_t data )
{
    #if LCD_MODE == 4

        print_lcd4_bit(data);

    #elif LCD_MODE == 8
        print_lcd8_bit(data) ;


    #endif // LCD_MODE
}
#if !defined Tahal && defined tito

#endif
