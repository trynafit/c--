#include<iostream>
using namespace std;
class property{
    protected:
   int  wealth = 35;
    public:
    void show(){
        cout<<"the wealth is "<<wealth<<" crores"<<" in rupees"<<endl;
    }
    property(){
        cout<<wealth<<endl;
    }
};
class child : private property {
    public:
child(){
    wealth = 5;
}
void cahn(){
    wealth = 32;
}
void show(){
    property::show();
}

};

int main(){
    child l;
    l.cahn();
    l.show();

}