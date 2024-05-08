#include <iostream>
#include <string>
#include <vector>
using namespace std;

class bike {
public:
    static int noOfBikes; // belongs to class
    int tyreSize;
    int engine;

    // values initialize karo
    bike(int tyreSize, int engine = 220) {
        this->tyreSize = tyreSize;
        this->engine = engine;
    }

    static void increase_no_of_Bike(){
        noOfBikes++;
    }
};

int bike::noOfBikes=4;

int main() {
   

    bike kawasaki(1);
    bike honda(7, 76);
    bike splender(2);
    
    splender.noOfBikes=46;

    cout << bike::noOfBikes<<endl;
    bike::increase_no_of_Bike();
    cout << bike::noOfBikes<<endl;
    honda.increase_no_of_Bike();
    cout << bike::noOfBikes<<endl;

    return 0;
}
