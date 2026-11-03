/*
  A teacher has 5 student test scores stored in an array.
  Write a program that prompts the teacher to enter these 5 scores,
  applies a "curve" by adding 5 bonus points to every single score inside the array, 
  and then prints out the updated list of scores.
*/

#include <iostream>
using namespace std;
//from now on i will comments on dumb and new things. :)
int main() {
    //variables
    int score[5];
    int updated[5];
    //loop for input and bonus marks  
    for (int i = 0; i < 5; i++)
    {
        cout<<"plz put the marks of "<<i+1<<" student: ";
        cin>>score[i];
        updated[i]=score[i]+5;
    }
    //lop for printing 
    for (int i = 0; i < 5; i++)
    {
        cout<<"\nthe student "<<i+1<<" has scored "<<score[i]<<" but after the 5 bonus marks it is: "<<updated[i];
    }
    /* ************************************************************************************************
    the error for this code is that is the max marks are 100 then 
    if some one scored 99 then there score be 104. u can fix this ur self i can too but not in the mood.
    ***************************************************************************************************
    */
    return 0;
}
