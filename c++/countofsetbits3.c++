#include<iostream>
using namespace std;

// Precompute the number of set bits for each possible byte value
int lookupTable[256];

// Function to initialize the lookup table
void initializeLookupTable() {
    for (int i = 0; i < 256; ++i) {
        lookupTable[i] = (i & 1) + lookupTable[i / 2];
    }
}

// Function to count the number of set bits using the lookup table
int countOfSetBits(int n) {
    return lookupTable[n & 0xff] +
           lookupTable[(n >> 8) & 0xff] +
           lookupTable[(n >> 16) & 0xff] +
           lookupTable[(n >> 24) & 0xff];
}

int main() {
    initializeLookupTable(); // Initialize the lookup table once

    int n;
    cout << "Enter the value of number: ";
    cin >> n;
    cout << "The number of set bits is " << countOfSetBits(n) << endl;

    return 0;
}
