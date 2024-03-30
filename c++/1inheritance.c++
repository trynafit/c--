#include<iostream>
using namespace std;
class property{
    protected:
    int wealth ;
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
    show();
}
};

int main(){
    property s ;
    child l;
    s.show();

}