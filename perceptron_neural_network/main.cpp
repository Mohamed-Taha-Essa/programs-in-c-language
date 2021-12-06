#include <iostream>

using namespace std;

int main()
{


// inputes
    float arr_inpute[2] ;
    int counter = 0 ;
    for(counter = 0 ; counter < 2 ; counter++)
    {
        if (counter == 0 )
        {
          cout << "enter the input" << endl;
        }
        else { cout << "enter the second input" << endl;}
        cin >> arr_inpute[counter] ;

    }
    //take wight fron user
    cout << "enter the weight" <<endl;

    float arr_wight[2] ;
    counter = 0 ;
    for(counter = 0 ; counter <2 ;counter++)
    {
        cin>> arr_wight[counter];
        if(counter ==0)
        cout<< "the secon wight" <<endl;
        else
        {

        };
    }

    //multiply and sum  input and wight

    counter = 0 ;
    float output =0 ;
    for(counter = 0 ; counter < 2 ; counter++)
    {
        output += (arr_inpute[counter] * arr_wight[counter]);
    }

    for(counter = 0 ; counter < 2 ; counter++)
    {
        cout<< arr_mul_sum[counter]<<endl;
    }

    return 0;
}
