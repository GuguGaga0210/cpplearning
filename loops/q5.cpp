/*
  q5. A warehouse has 150 crates of a product. 
  Every week, shipments consume 18 crates. 
  Write a loop to print the remaining inventory week by week 
  until the warehouse can no longer fulfill a full week's shipment.
*/
#include <iostream>
using namespace std;
int main() {    
    int crats= 150,weeks=0;// read the question and u will get the idea for this line. (and read the pervious shit)
    while (crats>17)// runs till carts are under 17 (that is 16 times)
    {
        weeks++;//adds on to how many weeks
        crats-=18;// removs the crats that were taken
        cout << "Week " << weeks << ": " << crats << " crates remaining." << endl;//prints weeks and crats remaning
    }
    cout<<"\nthis many weeks: "<<weeks;// the "\n" is like endl that just moves the printing cursor to the next line.
    return 0;//must be wondering what this does . just google it.
}
 