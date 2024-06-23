#include<iostream>
#include<vector>
using namespace std;
void sieve(int n){
    vector<bool> isprime(n+1 , true);
    for(int i = 2 ; i*i<=n;i++){
        if(isprime[i]){
    for(int k = i*2; k<=n;k = k+i){
        isprime[k] = false;
    }
        }
    }
    for(int l = 2;l<n;l++){
if(isprime[l])
cout<<l<<endl;
    }
}
int main(){
    cout<<"enter a number"<<endl;
    int a;
    cin>>a;
    sieve(a);
}