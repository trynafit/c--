#include<iostream>
using namespace std;
string isprime(int n){
    if(n==1) return "the number is not prime";
    if(n==2||n==3) return "the number is prime";
    if(n%3==0 || n%2==0) return "the number is not prime";
    for (int k = 5;k*k<=n;k=k+6){
        if(n%k==0 || n%(k+2)==0)
        return "the number is not prime";
    }
    return "the number is prime";
}
int main(){
int a ; 
cin>>a;
cout<<isprime(a);

}
//this code is 3 times faster than the primenumbercheck1