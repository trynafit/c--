#include<iostream>
using namespace std;
    void primefactors(int b){
for(int k = 2;k*k<=b;k++){
   while(b%k==0){
cout<<k<<endl;
b = b/k;
   }
}
if (b>1)
cout<<b<<endl;
    }
int main()
{
    int a;
    cin>>a;
   cout<<"the prime factors are"<<endl;
   primefactors(a);
}
//14