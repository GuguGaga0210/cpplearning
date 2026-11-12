#include <iostream>
#include <string>
using namespace std;
int main() {
    string text;
    cout<<"type something : ";
    cin>>text;
    int vol=0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'){
            vol++;
        }
    }
    cout<<vol;
    return 0;
}

