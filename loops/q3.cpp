/*
  q3. A bank ATM allows a user up to 3 attempts to enter 
  the correct 4-digit PIN (e.g., 5542). Write a program 
  that repeatedly prompts the user for the PIN until they 
  get it right or run out of attempts
*/
#include <iostream>
using namespace std;
int main() {    
    int pin = 1234;// the pin
    int pinn=0; // the name is very creative(this is for the inupt by the user)
    for (int i = 0; i < 3; i++)// 3 time cuz 3 atemptes
    {
        cout<<"enter pin: "; //asks for pin ... duh
        cin>>pinn;//just puts the input in pinn
        if (pin==pinn)// cheacks if correct
        {
            cout<<"correct";
            break; // break free for this loop (of life)
        }
        else
        {
            cout<<"incorrect"<<endl;
            pinn=0;// resets the user input
        }
    }
    return 0;
}
 