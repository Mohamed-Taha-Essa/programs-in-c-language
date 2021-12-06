typedef unsigned char uint8_t ;
typedef struct Register_8Bit
{
    uint8_t sensor1 : 4 ;
    uint8_t sensor2 : 4 ;
   // uint8_t sensor3  ;
    //uint8_t sensor4 : 3;
    //uint8_t  : 0 ;
    //uint8_t sensor7 : 3;
    //float sensoe8 :5 ; wrong
   // static uint8_t :4 ; wrong
    //uint8_t sensor8[5] : 4 ; wrong
}Register_8Bit_t;


typedef struct pir_sensor
{
    uint8_t pir_sensor1 :1 ;
    uint8_t pir_sensor2 :1 ;
    uint8_t pir_sensor3 :1 ;
    uint8_t pir_sensor4 :1 ;
    uint8_t pir_sensor5 :1 ;
    uint8_t pir_sensor6 :1 ;
    uint8_t pir_sensor7 :1 ;
    uint8_t pir_sensor8 :1 ;
}pir_sensor_t;
typedef union person_info
{
    uint8_t id;
    int degree ;
    unsigned char name[13]  ;

}person_info_t;
typedef union Register
{
    uint8_t register_full_access ; //size of union is one byte

    struct register_bits
    {
        uint8_t bit1 : 1 ;
        uint8_t bit2 : 1 ;
        uint8_t bit3 : 1 ;
        uint8_t bit4 : 1 ;
        uint8_t bit5 : 1 ;
        uint8_t bit6 : 1 ;
        uint8_t bit7 : 1 ;
        uint8_t bit8 : 1 ;
    }register_bits_value;
    struct register_half_access
    {
        uint8_t bit0_3 : 4 ;
        uint8_t bit4_7 : 4 ;
    }register_half;
}Register_t;

typedef enum Timer0_prescaler
{
    Timer0_prescaler_2 ,//0
    Timer0_prescaler_4 ,//1
    Timer0_prescaler_8 ,//2
    Timer0_prescaler_18 ,//3
    Timer0_prescaler_32,//4
    Timer0_prescaler_64 = 1,//1
    Timer0_prescaler_128,//2
    Timer0_prescaler_256//3
}Timer0_prescaler_t;
typedef enum function_return_status
{
    Return_fail ,
    Return_pass
}function_return_status_t;
function_return_status_t put_timer_prescaler(Timer0_prescaler_t timer0_pres );

uint8_t gitvalue(uint8_t num);
void set_bit_value_from_user(pir_sensor_t *pir_sensor_value);
void print_value_reg( pir_sensor_t *reg) ;


