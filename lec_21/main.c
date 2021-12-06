#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct sensor
{
    unsigned char sensor_id ;
    unsigned char sensor_name[20] ;
    unsigned int sensor_value ;

}sensor_t ;

FILE *ptr_file_write;
FILE *ptr_file_read ;
char input_char ;
sensor_t sensor ;
char sensor_data[50], counter = 0;

int main()
{
    /*ptr_file_write = fopen("test.txt" ,"w");
    ptr_file_read = fopen("test.txt " , "r");
if (NULL == ptr_file_write ||NULL == ptr_file_read)
{
    printf("eror file dosnot exist");
}
else
{
    while (( input_char = getchar()) != 10)
    {
        putc(input_char , ptr_file_write) ;
    }
    fclose(ptr_file_write);
    printf("==============================\n") ;
    printf("data : " ) ;
    while( (input_char =( getc(ptr_file_read)))!= EOF)
    {
        putchar(input_char);
    }
    printf("\n");
    fclose(ptr_file_read);
}
*/
printf("-------------\n");
    sensor.sensor_id  = 11 ;
    strcpy(sensor.sensor_name , "temp sensor one " ) ;
    sensor.sensor_value = 256 ;
     ptr_file_write = fopen("test.txt" , "a");
     ptr_file_read = fopen("test.txt" , "r");
     if((NULL == ptr_file_write) || ptr_file_read == NULL)
        {
        printf("Error : File does not exist !!\n");
        }
    else
    {
        fprintf(ptr_file_write, "Id:%i,Name:%s,Value:%f#\n",
                sensor.sensor_id, sensor.sensor_name, sensor.sensor_value);
        fclose(ptr_file_write);
        while (  (input_char = getc(ptr_file_read)) != '#')
        {
            sensor_data[counter ] = input_char ;
            counter ++ ;
        }
                printf("Sensor Data : %s\n", sensor_data);

    }

        return 0;
}
