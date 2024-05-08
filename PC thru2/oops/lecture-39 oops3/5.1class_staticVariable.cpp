#include <iostream>
#include <string>
#include <vector>
using namespace std;

class bike {
public:
    static int noOfBikes;
    int tyreSize;
    int engine;

    // values initialize karo
    bike(int tyreSize, int engine = 220) {
        this->tyreSize = tyreSize;
        this->engine = engine;
    }
};

int bike::noOfBikes = 654; // Initialize static member outside the class

int main() {
   

    bike kawasaki(1);
    bike honda(7, 76);
    bike splender(2);

    cout << bike::noOfBikes;

    return 0;
}
