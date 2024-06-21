#include<iostream>
using namespace std;
void primefactor(int n){
    if(n == 1) 
    cout<<"the number has no prime factors";
    else
    {
         while(n%2==0){
            cout<<2<<endl;
            n=n/2; }
              while(n%3==0){
            cout<<3<<endl;
            n=n/3; }
            for(int k = 5;k*k<=n;k++){
                while(n%k==0){
            cout<<k<<endl;
            n=n/k; }
              while(n%(k+2)==0){
            cout<<(k+2)<<endl;
            n=n/(k+2); }
            }
        }
        if(n>3)
        cout<<n;
    }
int main(){
int a;
cin>>a;
primefactor(a);
}