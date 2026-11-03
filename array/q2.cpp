/* 
  q2. A logistics hub loads packages into 6 delivery trucks.
  The weights are stored in a fixed array: {120, 450, 80, 310, 500, 190} (in kg).
  Write a program that counts and prints how many trucks are carrying a load
  that strictly exceeds the legal safety limit of 300 kg.
*/
/*
************************************************

YOU COULD DO THIS WITH RANDOMLY AND INPUT IT TOO.

************************************************
*/
#include <iostream>
using namespace std;

int main() {
    int wieght[]={120, 450, 80, 310, 500, 190},limit_exider=0;
    for (int i = 0; i < 6; i++)
    {
        if (wieght[i]>300)
        {
            limit_exider++;
        }
          
    }
    cout<<"No. of truck that exceeded legal limit:"<<limit_exider;
    
    return 0;
}
