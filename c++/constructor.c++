#include<iostream>
using namespace std;
class k{
    public:
    int a = 84;
    int b = 33;
    k(){
        cout<<" the default function is here";

    }
    k(int j , int h){
        a = j;
        b = h;
    }
};
int main(){
    k s = k();
    cout<<s.a<<" "<<s.b;
}