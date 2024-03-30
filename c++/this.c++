#include<iostream>
#include<stdlib.h>
using namespace std;
class demo{
    public:
    int a;
    int b;
    int c;
    demo(int a , int b , int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void d(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};
int main(){
demo s1(23,54,23);
s1.d();
system("cls");

}