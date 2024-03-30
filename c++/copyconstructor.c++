//shalow copy;
#include<iostream>
using namespace std;
class student {
    public:
    int c;
    student *i;
 student(int a ){
c = a;
 }
 student(student &i){
    c = i.c;
    cout<<c;
    cout<<&i;
 }
};
int main(){
   student a(20);
   student b = a;
}
