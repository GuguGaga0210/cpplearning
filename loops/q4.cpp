/*
  q4. An investor deposits $1,000 into a savings account earning a fixed 5% annual interest.
  Write a program using a loop to find out exactly how many years it will take for the account
  balance to pass $2,000
*/
#include <iostream>
using namespace std;
int main() {    
    double amount=1000; //the starting amout
    int years=0;//var for how amy years
    while (amount<=2000) // cheacks that if the amount is under or is equal to 200 (if what to know why 200 just read the question dunbdumb)
    {
        amount*=1.05;//adds the interst
        years++;//adds onto to how amy years
    }

    cout<<"it took this amy years: "<<years;// i will correct my spellings 🤦‍♀️🤦‍♀️🤦‍♀️🤦‍♀️
    
    return 0;
}
 