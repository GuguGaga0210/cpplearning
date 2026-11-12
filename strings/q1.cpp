#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;// the username
    cout<<"put username: ";
    cin>>a;
    if (a.length()>=6)// .lenght() returns the no of chaarter in a sting 
    {
        cout<<"valid";
    }
    else{
        cout<<"too short";
    }
    
    return 0;
}

