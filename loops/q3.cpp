//q3. A bank ATM allows a user up to 3 attempts to enter the correct 4-digit PIN (e.g., 5542). Write a program that repeatedly prompts the user for the PIN until they get it right or run out of attempts

#include <iostream>
using namespace std;
int main() {    
    int pin = 1234;
    int pinn=0;
    for (int i = 0; i < 3; i++)
    {
        cout<<"enter pin: ";
        cin>>pinn;
        if (pin==pinn)
        {
            cout<<"correct";
            break;
        }
        else
        {
            cout<<"incorrect"<<endl;
            pinn=0;
        }
    }
    return 0;
}
 