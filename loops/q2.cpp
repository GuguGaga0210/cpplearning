/*
  q2. A laboratory culture starts with 10 bacteria. 
  The population doubles every hour. Write a program 
  that uses a loop to display the population at the 
  end of each hour for 12 hours.
*/
#include <iostream>
using namespace std;
int main() {    
    long long bact=10;// used long long to store a long number cuz if this shit was looped further then it would exceed the int limit (eg. `2 billion)
    cout<<"Bacteria at the start: "<<bact<<endl;//print 10 (cuz the starting bact is 10)
    for (int i = 0; i < 12; i++)//loops 12 times cuz the questions says so
    {
        bact*=2;//doulbes the culture men
        cout<<"Bacteria after "<<i+1<<" hours: "<<bact<<endl;//pints the culture poplulation every hour
        
    }
    
    return 0;
}
 