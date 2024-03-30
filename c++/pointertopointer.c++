#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr1 = &x;  // Pointer to an integer
    int** ptr2 = &ptr1;  // Pointer to a pointer

    // Accessing the value through a double pointer
    cout << "Value of x using double pointer: " << **ptr2 << endl;

    // Modifying the value of x through the double pointer
    **ptr2 = 20;

    // Now, the value of x has been modified
    cout << "Modified value of x: " << x << endl;

    return 0;
}
