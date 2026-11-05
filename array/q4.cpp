/*
  q4.A financial analyst wants to see the closing stock prices 
  of the last 7 days in reverse chronological order. 
  Input the prices day 1 through 7 into an array, and output 
  them from day 7 to day 1.
*/
#include <iostream>
using namespace std;
int main() {
    int stockpirce[7],inverse[7];//the vars
    for (int i = 0; i < 7; i++)//loop for input and inversing the input array
    {
        cout<<"input today's stock price: ";
        cin>>stockpirce[i];
        inverse[6-i]=stockpirce[i];//put the stockprice's 0 index in inverse's 6 index. then 1 to 5 ,2 to 4 , and soooo on.
    }
    cout<<"the reverse chronological order is: "<<endl;
    for (int i = 0; i < 7; i++)//just printing the result
    {
        cout<<inverse[i]<<endl;
    }
    
    
    return 0;
}
