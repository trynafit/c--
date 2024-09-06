#include<iostream>
using namespace std;
class realandimaginry{
int real , imag;
public :
realandimaginry(){real = 0 ;
 imag = 0;}
realandimaginry(int r , int i ){
    real = r;
    imag = i;
}
realandimaginry operator+(realandimaginry  &ob1){
    realandimaginry ob3;
    ob3.real = real + ob1.real;
    ob3.imag = imag + ob1.imag;
    return ob3;
}
void print(){
    cout<<real<<" +"<<imag<<"i";
}
};
int main(){
    realandimaginry c1(10,3) , c2(20,1);
    realandimaginry c3 = c1 + c2;
    c3.print();
}