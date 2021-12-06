#include <stdio.h>
#include <stdlib.h>
int taha (int a )
{
    int x ;
    if (a == 1 )
        return 1 ;
    else
        x = 1+ taha(a-1);

        return x ;
}
int main()
{
    int x = taha(4) ;
    printf("%i\n",x);
    return 0;
}
