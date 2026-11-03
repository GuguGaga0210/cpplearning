/*

if ur here cuz this is first plz start from loops then array , then string ,then, pointer ,vector and finally classes. then will be more soon.!!

*/
/*
  q1. A weather station tracks the peak afternoon temperatures for 5 consecutive days.
  Write a program that accepts these 5 decimal values from the user into an array,
  finds the highest temperature recorded, and calculates the temperature difference
  between that maximum and the first day's temperature.
*/
#include <iostream>
using namespace std;

int main() {
    double temps[5];// this is a decimal arry which and contain 5 elemnts and has the index {0,1,2,3,4}
    double max=0.0;//this is decimal var that holds the max numb.
    for (int i = 0; i < 5; i++)//do i have to tell u :/
    {
        cout<<"put in the temps of today: ";//not teling !!
        cin>>temps[i];
        if (temps[i]>=max)// checks if the the tthe i th postion is biggr than the previous max
        {
            max=temps[i];//if yes, change that to max
        }
        
    }
    
    cout<<"the max temp was"<<max;
    cout<<"the diffrece btw first day and max temp is "<<max-temps[0];//prints the difference
    
    return 0;
}

