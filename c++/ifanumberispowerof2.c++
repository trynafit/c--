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
    if(countofsetbits(n)!=1)
    cout<<"false";
    else
   cout<<"true";
}