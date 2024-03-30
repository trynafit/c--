#include<iostream>
using namespace std;
struct node {
    int data;
    struct node*next  = nullptr;
};
struct node* createnode(int data,struct node**head){
    struct node *newnode = new struct node;
   newnode->data = data;
   if(*head == NULL){
   newnode->next = newnode;
   *head = newnode;
   }
   else{
    newnode->next = *head;
   }
   return newnode;
}
void insertthenode(struct node**head,int data){
       struct node*newnode = createnode(data,head);
struct node*current = *head;
if(*head==NULL){
    *head = newnode;
}
else{
do{
    current = current->next;
}
while(current!=*head);}
current->next  = newnode;

}
void printlist(struct node*head){
    struct node*current = head;
    do{
    cout<<current->data<<endl;
    
        current= current->next;
    }while(current!=head);
}
void freelist(struct node** head) {
    struct node* current = *head;
    do {
        struct node* next_node = current->next;
        delete current;
        current = next_node;
    } while (current != *head);
    *head = nullptr; // Reset the head to null after freeing the list
}


int main(){
    struct node*head = nullptr;
    insertthenode(&head,112);
    insertthenode(&head,3223);
    
printlist(head);
freelist(&head);
}