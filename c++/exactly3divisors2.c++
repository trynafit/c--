#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int exactly3Divisors(int n) {
    int fresult = 0;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime(i)) {
            if (i * i <= n) {
                fresult++;
            }
        }
    }
    return fresult;
}

int main() {
    int a;
    cin >> a;
    cout << exactly3Divisors(a) << endl;
    return 0;
}
/*for a number to be exactly divisible by three
 it should be square of a prime number*/