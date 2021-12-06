#include "Perceptron2.h"
using namespace std;
//function to find  the sign of number     The activation function
int sign (float number);

class Percptron
{
    public:
        Percptron() //constructor
        {
            int counter =0 ;                             //using in for loop
            float y = .9;                                //using to find random numbeer between -1 ,1
            for (counter =0 ; counter < sizeof(arr_wight)/sizeof(arr_wight[0]) ; counter++)  //for to put rand weight in arr
                {
                    arr_wight[counter] = (-1+ rand()%3)/y;
                    y +=.2;
                 }

       }
        float arr_wight[2] ;
         int guess(float inputs[]);




    protected:

    private:
};

class Point
{
public:
    float var_x ;
    float var_y ;
    int   label ;
    Point()
    {
        var_x = rand()%8+ 50;
        var_y = rand()%10 +70 ;
        if(var_x > var_y)
        {
            label = 1 ;
        }
        else {
            label = -1;
        }
    }
};

int main()
{
    Percptron p  ;
    float input[2] = {-1 ,47} ;
    int guss  = p.guess(input);
    cout<< guss ;

}

int Percptron::guess(float inputs[])
         {
             float sum = 0 ;
             int counter = 0 ;
             for(counter =0 ; counter <sizeof(arr_wight)/sizeof(arr_wight[0]) ; counter++)
             {
                 sum += arr_wight[counter] *inputs[counter];
             }
             int output = sign(sum);
             return output ;
         }
//function to find  the sign of number     The activation function

int sign (float number)
{
    if(number >=0 )
    {
        return 1 ;
    }
    else
    {
        return -1 ;
    }
}
