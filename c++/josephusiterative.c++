#include <iostream>
using namespace std;
// Function to solve Josephus problem iteratively
int josephus(int n, int k) {
    int result = 0; // Starting with 0-based indexing
    for (int i = 1; i <= n; i++) {
        result = (result + k-1) % i +1; // Update position based on step size
    }
    return result ; // Convert from 0-based to 1-based indexing
}

int main() {
    int n = 10, k = 3;
    cout << "The safe position is: " << josephus(n, k) << endl;
    return 0;
}
