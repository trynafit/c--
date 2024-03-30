#include<iostream>
using namespace std;
class student {
    public:
    int id;
    string name;
    float fees;
    void insert(int i , string s, float f){
        id = i;
        name = s;
      fees = f;
    }
    void display(){
    cout<<id<<"  "<<name<<"  "<<fees<<endl;
}
};
int main(){
    student d;
    student b;
    d.insert(23, "lavish" , 234243);
    d.display();
    b.insert(34,"jefgh" , 345434);
    b.display();

}