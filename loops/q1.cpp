//  q1. A user wants to log their steps every day for a week. Write a program that asks for the steps taken each day for 7 days, tracks the total, and calculates the average daily step

#include <iostream>
using namespace std;
int main() {
    int total_steps=0;
    int steps;
    double avg_steps=0.0;
    for (int i = 0; i < 7; i++)
    {
       cout<<"Enter step for day "<<i+1<<": ";
       cin>>steps;
       total_steps+=steps;
    }
    avg_steps=total_steps/7;

    
    cout<<"total step u cover in last 7 days:"<<total_steps;
    cout<<endl<<"avg steps u walked daliy in the past 7 days:"<<avg_steps;
    
    return 0;
} 
