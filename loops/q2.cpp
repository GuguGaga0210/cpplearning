//q2. A laboratory culture starts with 10 bacteria. The population doubles every hour. Write a program that uses a loop to display the population at the end of each hour for 12 hours.

#include <iostream>
using namespace std;
int main() {    
    long long bact=10;
    cout<<"Bacteria at the start: "<<bact;
    for (int i = 0; i < 12; i++)
    {
        bact= bact*2;
        cout<<"Bacteria after "<<i+1<<" hours: "<<bact<<endl;
    }
    
    return 0;
}
