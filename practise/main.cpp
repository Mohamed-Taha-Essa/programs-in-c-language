#include <iostream>

using namespace std;

int main()
{
    int counter = 0 ;
    float x ;
    float y = 1 ;
    for (counter = 0 ; counter <50 ; counter++)
    {
        x =  (-1+ rand()%3)/y;
        cout <<x <<endl;
        y +=.2;
    }
    return 0;
}
