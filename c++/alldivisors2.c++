#include<iostream>
using namespace std;
void alldivisor(int n){
    int i;
    cout<<"all the divisors are"<<endl;
    for( i = 1; i*i<=n;i++){
        if(n%i==0)
        cout<<i<<endl;
    }
    for(--i;i>=1;i--){
        if(n%i==0)
        cout<<(n/i)<<endl;
    }
}
int main(){
    int a;
cout<<"enter a number which you want to get all the divisors of"<<endl;
    cin>>a;
    alldivisor(a);
}