/*
  q1. A user wants to log their steps every day for a week.
  Write a program that asks for the steps taken each day for 7 days,
  tracks the total, and calculates the average daily step
*/
#include <iostream>
using namespace std; //using this cuz its standard and u dont have to use std::cout or shit
int main() {
    int total_steps=0; //var for total steps(could have told from name ;) )
    int steps;//the same thing as above
    double avg_steps=0.0; // || <----  (symbol for "the same this as above")
    for (int i = 0; i < 7; i++) //loop the repeats 7 times
    {
       cout<<"Enter step for day "<<i+1<<": ";//the line that asks for the input (like a print in python)
       cin>>steps;//it give space for inpiut (justs input the character the user types in to var)
       total_steps+=steps;//adds the steps to total (like the total was 0 then after the first loop u input like 7000 so its 0+7000=7000 then 7000+10000=17000 like this )
    }
    avg_steps=total_steps/7;//just divied the total steps by 7 (takes out avarage that is avg=total of the data / no . of data)

    
    cout<<"total step u cover in last 7 days:"<<total_steps;//prints total steps
    cout<<endl<<"avg steps u walked daliy in the past 7 days:"<<avg_steps;//prints avg steps
    
    return 0;
} 
