#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    long int  key = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

    unordered_set<long long> a;  // Change the data type of the set to long long

    for (int i = 0; i < size; i++) {
        long long complement = key - arr[i];

        // Check if the complement is in the set
        if (a.find(complement) != a.end()) {
            cout << "There are two numbers whose sum is key" << endl;
             return 0 ; // Add this line to exit the program after finding a pair
        } else {
            a.insert(arr[i]);
        }
    }

    cout << "No two numbers whose sum is key were found." << endl;

    
}
