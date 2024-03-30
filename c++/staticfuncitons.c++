#include<iostream>
using namespace std;
static int a =23344;
static void funk(){
    
    cout<<"the number has been entered"<<endl;
    cout<<&a<<endl;
}
static void punk(){
    static int a  = 435345;
}
int main(){
    funk();

cout<<a<<endl;
cout<<&a;



}