//q5. A warehouse has 150 crates of a product. Every week, shipments consume 18 crates. Write a loop to print the remaining inventory week by week until the warehouse can no longer fulfill a full week's shipment.
#include <iostream>
using namespace std;
int main() {    
    int crats= 150,weeks=0;
    while (crats>17)
    {
        weeks+=1;
        crats-=18;
        cout << "Week " << weeks << ": " << crats << " crates remaining." << endl;
    }
    cout<<"\nthis many weeks: "<<weeks;
    return 0;
}
 