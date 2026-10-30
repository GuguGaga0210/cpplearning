//q4. An investor deposits $1,000 into a savings account earning a fixed 5% annual interest. Write a program using a loop to find out exactly how many years it will take for the account balance to pass $2,000
#include <iostream>
using namespace std;
int main() {    
    double amount=1000;
    int years=0;
    while (amount<=2000)
    {
        amount*=1.05;
        years+=1;
    }

    cout<<"it took this amy years: "<<years;
    
    return 0;
}
