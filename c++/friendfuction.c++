#include<iostream>
using namespace std;
class name{
    private:
    int a = 1;
    private:
    void check(){
    if(a==0){
        system("cls");
        cout<<"the screen has been cleared because number is zero"<<endl;
    }
   }
public:
friend void nam( name &c);

};
void nam(name &c){
    int b;
cout<<"enter a number"<<endl;
cin>>b;
    cout<<"the number has been entered"<<endl;
c.a = b;
c.check();

}
int main(){
name s;
nam(s);
}