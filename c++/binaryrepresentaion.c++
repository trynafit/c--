#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int  x = 2;
    int y = (-x);
    cout<<bitset<8>(x)<<endl;
    cout<<bitset<8>(y);
}