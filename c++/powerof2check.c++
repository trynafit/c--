#include<iostream>
using namespace std;
bool powerof2( long long a){
if (a>0 && (a&(a-1))==0){
    return true;
}
else
return false;
}
int main(){
cout<<powerof2(8);
}