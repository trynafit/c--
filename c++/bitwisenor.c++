#include<iostream>
using namespace std;
int main(){
    unsigned int a =0;
    cout<<(~a)<<endl;
    unsigned int b = UINT_FAST32_MAX;
    cout<<b<<endl;
    int c = 1;
    //0000000000
    //1111111111+1
    cout<<(~c);


}