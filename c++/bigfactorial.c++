#include<iostream>
using namespace std;
int main(){
    int a = 20;
    unsigned long long result = 1;
    while(a>0){
        result = result*a;
        a--;
    }
    cout<<result;
}