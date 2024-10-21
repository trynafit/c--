#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
node(int value)
{ data = value ; left = nullptr; right = nullptr;
}};
void inordertraversal(node* root){
    if (root == NULL)
    return;
    else{
        inordertraversal(root->left);
        cout<<root->data;
        inordertraversal(root->right);
    }
}
int main(){
    node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    inordertraversal(root);
}