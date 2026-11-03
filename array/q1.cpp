//q1. A weather station tracks the peak afternoon temperatures for 5 consecutive days. Write a program that accepts these 5 decimal values from the user into an array, finds the highest temperature recorded, and calculates the temperature difference between that maximum and the first day's temperature.

#include <iostream>
using namespace std;

int main() {
    double temps[5];
    double max=0.0;
    for (int i = 0; i < 5; i++)
    {
        cout<<"put in the temps of today: ";
        cin>>temps[i];
        if (temps[i]>=max)
        {
            max=temps[i];
        }
        
    }
    
    cout<<"the max temp was"<<max;
    cout<<"the diffrece btw first day and max temp is "<<max-temps[0];
    
    return 0;
}

