#include<iostream>
using namespace std;
int countofsetbits(int n){
   int count = 0;
    while(n>0){
         n&=(n-1);
        count++;
    }
   return count;
}
int main(){
 int n;
    cout<<"enter the value of number"<<endl;
    cin>>n;
cout<<"the number of set bits are "<<countofsetbits(n);
}
//Clearing Set Bits: The expression n &= (n - 1) works by flipping the least
//  significant set bit of n to zero. For example
//  , if n is 12 (binary 1100), n - 1 is 11 (binary 1011). 
//  The bitwise AND operation between 1100 and 1011 results in 1000, 
//  effectively removing the least significant set bit.