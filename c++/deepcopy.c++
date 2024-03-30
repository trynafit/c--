#include<iostream>
using namespace std;
class demo{
    public:
    int a; 
    int b; 
    int *c;
    demo(){
    c = new int ;
    }
    demo(  demo &j){
     a = j.a;
     b = j.b;
     c = new int ;
     *c =  *(j.c);
    }
    void setdata(int x , int y , int z)
    {
     a = x;
     b = y;
     *c = z;
    }
    void showdata(){
        cout <<a<<endl;
        cout<<b<<endl;
        cout<<*c<<endl;
    }
    ~demo(){
        delete c;
    }

};
int main(){
    demo s1;
   s1.setdata(323,6545,765);
    demo s2 = s1;
    s2.showdata();

}