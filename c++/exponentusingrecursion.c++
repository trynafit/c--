#include<iostream>
using namespace std;
long long power(int N,int R)
    {
        long long mod = 1000000007;
        if(R==0){
        return 1;
    }
    else{
        long long i  = power(N , R/2);
        i =((i*i)%mod);
        if(R%2!=0){
            return (i*N)%mod;
        }
        else{
        return i;
        }
        }}
int main(){
    cout<<power(50,5);
}