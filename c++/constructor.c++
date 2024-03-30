#include<iostream>
using namespace std;
class k{
    public:
    int a;
    int b;
    k(){
        cout<<" the default function is here";

    }
    k(int j , int h){
        a = j;
        b = h;
    }
};
int main(){
    k s = k()
    k h;
    cout<<s.a<<" "<<s.b;
}