#include<iostream>
#include<bitset>
using namespace std;
int kthValue(int k) {
    return 1 << (k - 1);
     }
int main(){
    unsigned int  a = 5;
    unsigned int k = 3;
    cout<<"the a is "<<bitset<16>(a)<<endl;
    cout<<"the complement is "<<bitset<16>( kthValue(k))<<endl;
    if((kthValue(k)&a) != 0)
    cout<<"true the kth bit is on"<<endl;
    else
    cout<<"the kth bit if off";
}

// void isKthBitSet(int n, int k) 
// { 
// 	if ((n >> (k - 1)) & 1) 
// 		cout << "SET"; 
// 	else
// 		cout << "NOT SET"; 
// } 
