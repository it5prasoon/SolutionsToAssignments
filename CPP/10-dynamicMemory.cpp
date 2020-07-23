#include <iostream>
using namespace std;

class Box {
public:
    Box() {
        cout << "Constructor called!" << endl;
    }
    ~Box() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Box *b1 = new Box; // allocating memory for Box object
    delete b1;
    cout << "--------------------" << endl;
    Box *b2 = new Box[3]; // allocating memory for an array of four Box objects
    delete [] b2;
    
    return 0;
}
