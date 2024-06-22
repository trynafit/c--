#include<iostream>
// this is my first template program
using namespace std;
template <typename t> 
class student{
    public:
    student(){}
    adding( t data , t moredata){
cout<<"the result is "<< data + moredata<<endl;}
};
int main(){
student<int> k ;
k.adding(45 ,76);
}
//klay thompson