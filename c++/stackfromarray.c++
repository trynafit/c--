#include<iostream>
using namespace std;
#define MAX 10
class stack{
    int top;
  int arr[MAX];
  public:
  stack(){
    top= -1;
  }
  void pop();
  void push(int x);
  void peek();
};
void stack::push(int x){
    if(top >= MAX-1){
cerr<<"the stack is full no elements can be added\n";
    }
    else{
        arr[++top]= x;
        cout<<top<<"-";
        cout<<arr[top]<<endl;
    }
}
void stack::peek(){
    cout<<"the top element of the stack is "<<arr[top];
}
void stack::pop(){
    if(top < 0)
    cout<<"stack is empty";
    else{
    cout<<"the top element has been removed from the array\n";
    cout<<"the poped element is " << arr[top--]<<endl;//change to --top to check difference between --top and top-- 
    }
}
int main(){
    class stack s;
    s.push(20);
    s.push(30);
    s.push(3434);
    s.push(30);
    s.push(45);
   s.pop();
   s.pop();
   s.peek();
}
