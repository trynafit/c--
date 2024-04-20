#include<iostream>
using namespace std;
struct Qnode{
int data;
Qnode *next;
Qnode(int data){
    this->data = data;
    next = nullptr;
}
};
struct queue{
Qnode *front  , *rear;
queue(){
    front = rear = nullptr;
}
void enqueue(int x){
Qnode *temp = new struct Qnode(x);
if(rear == nullptr){
    rear = front = temp;
}
rear->next = temp;
rear = temp;
}
void dequeue(){
    if(front == nullptr){
        return ;
    }
    Qnode *temp = front;
    front = front->next;
    delete temp;
}
};
int main(){
   struct queue q;
q.enqueue(82);
q.enqueue(72);
q.enqueue(34);
q.enqueue(45);
cout<<"front is  "<<((q.front == nullptr)? -1 : q.front -> data)<<endl;
q.dequeue();
cout<<"front is  "<<((q.front == nullptr)? -1 : q.front -> data)<<endl;
q.dequeue();
cout<<"front is  "<<((q.front == nullptr)? -1 : q.front -> data)<<endl;
q.dequeue();
cout<<"front is "<<((q.front == nullptr)?"empty":to_string(q.front -> data))<<endl;
q.dequeue();
cout<<"front is "<<((q.front == nullptr)?"empty":to_string(q.front -> data))<<endl;
q.dequeue();
}
