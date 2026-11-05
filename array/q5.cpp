/*
  q5.In a small club election with 10 voters, 
  each voter enters a candidate ID number (1 to 5). 
  Store the votes in an array and count how many total 
  votes Candidate #3 received.
*/
#include <iostream>
using namespace std;
int main() {
    int votes[10] , cand3=0 ;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Vote who? (from 1 to 5 ): ";
        cin>>votes[i];
        if (votes[i]==3)
        {
            cand3++;
        }
        
    }
    cout<<"this many people vote for candinate #3 : "<<cand3;
    return 0;
}
