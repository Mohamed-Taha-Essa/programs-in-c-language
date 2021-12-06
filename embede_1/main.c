#include <stdio.h>
#include <stdlib.h>
void printAhmed(void);
void (*fun_ptr)(void); //pointer on function


int main()
{
printAhmed();
printf("0x %X\n",printAhmed);
printf("0x %X\n",fun_ptr);

    return 0;
}
void printAhmed(void)
{
    printf("ahmed\n");
}
