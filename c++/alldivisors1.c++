#include<iostream>
using namespace std;
void alldivisors(int n){
cout<<1<<endl<<n<<endl;
for(int i = 2  ; i*i<=n;i++){
if(n%i==0){
    cout<<i<<endl<<(n/i)<<endl;
}
}
cout<<"that are all the divisors";
}
int main(){
cout<<"enter a number you want to get all divisors of"<<endl;
int a;
cin>>a;
alldivisors(a);
}