#include<iostream>
#include<bitset>
using namespace std;
int countofsetbits(int n){
    int count = 0;
    for(int i=0;i<32;i++){
    if(n&1)
        {
            count++;
            }
     n>>=1;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the value of number"<<endl;
    cin>>n;
cout<<"the number of set bits are "<<countofsetbits(n);
}