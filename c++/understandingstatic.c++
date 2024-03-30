#include<iostream>
using namespace std;
class demo{
    public:
    int b;
    demo(){
        cout<<"the constructor is invoked"<<endl;
    }
    ~demo(){
        cout<<"the destructor is invoked"<<endl;
    }
};
int main(){
    int a = 0;
    if(a ==0){
    demo w;//when scope of the if statement ends the destructor is invoked
    static demo e;/*because the memory has been static to the program
     it will be in the scope till end of the program*/
    
    }
    cout<<"holla amigos"<<endl;

}