#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n==1)return false;
    else{
for(int k = 2;k*k<=n;k++){
    if(n%k==0)
    return false;
}
    }
    return true;
}
int main(){
  int a;
  cin>>a;
 cout<< isprime(a);
}
// complexity of O(sqrt(n))