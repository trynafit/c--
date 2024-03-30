#include<iostream>
#include<cmath>
using namespace std;
double roots(int a){
    double guess = a/2.0;
    double b = 0;
    while(b<10){
    double root = guess - (guess*guess - a)/(2*guess);
     b++;
    if(abs(root - guess) < 0.0001){
        return root;    
    }
    guess = root;
    }
}

int main(){
    double b = 36;
    double a = roots(b);
    cout<<a;
}// n(logn) = number of opertion used to find the correct root
