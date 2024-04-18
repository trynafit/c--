#include<iostream>
#include<stdlib.h>
using namespace std;
struct stacknode{
int data;
struct stacknode *next;
};
struct stacknode*top = nullptr;
struct stacknode *createnode(int x)
{
struct stacknode *newnode = new struct stacknode ;
 newnode->data=x;
 newnode->next = nullptr;
return newnode;
};
void push(int x){
if(top==nullptr){
struct stacknode *pin = createnode(x);
top = pin;
}
else{
    struct stacknode *pin = createnode(x) ;
    pin->next =top;
 top = pin;
}
}
void see(){
if(top!=top->next){
    cout<<top->data<<endl;
    top = top->next;}
    else{
        cout<<"the last elements is "<<top->data;
    }
}
void removes(){
    while(top != nullptr){
    struct stacknode *temp = top;
    delete temp;
    top=top->next;
}
delete top;
cout<<"the memory deallocation is successful"<<endl;
}
int main(){
    push(20);
    push(30);
    push(40);
    push(90);
    see();
    see();
    see();
    see();
    removes();
}
