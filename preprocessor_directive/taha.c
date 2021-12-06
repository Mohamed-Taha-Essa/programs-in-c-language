
#include <stdio.h>
#include <stdlib.h>

typedef char uint8_t;
typedef union register
{
	uint8_t register_fullaccess;
	struct register_bits
	{
		uint8_t bit0 :1;
		uint8_t bit1 :1;
		uint8_t bit2 :1;
		uint8_t bit3 :1;
		uint8_t bit4 :1;
		uint8_t bit5 :1;
		uint8_t bit6 :1;
		uint8_t bit7 :1;

	}register_bits_values;

	struct register_half_access
	{

		uint8_t register0_3:4;
		uint8_t register4_7: 4 ;
	}register_half;

}register_t ;


int main()
{
	printf("hello world");
return 0;
}
