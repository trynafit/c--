#include<iostream>
using namespace std;

class Property {
protected:
    int wealth; // Declare wealth as protected
public:
    Property() : wealth(20) {} // Initialize wealth to 20 in the constructor
    void show() {
        cout << "The wealth is " << wealth << " crores in rupees" << endl;
    }
};

class Child : public Property {
public:
    Child() {
        // Directly update wealth in the constructor of the derived class
        wealth = 5; // Update wealth to 5
    }
};

int main() {
    Property s;
    Child l;
    l.show(); // This will display "The wealth is 5 crores in rupees"
    s.show();
    return 0;
}
