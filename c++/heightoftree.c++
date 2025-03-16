#include<iostream>
using namespace std;
class tree{
    public:
    tree *left;
    tree *right;
    int data;
    tree(int value){
        left = nullptr;
        right = nullptr;
        data = value;
    }
};
tree* insert(int data , tree* root){
    tree *temp = root;
    if(temp == nullptr){
        tree* newnode = new tree(data);
        return newnode;
    }
    else
    {
        while(true){
        if(temp->data > data){
            if(temp->left == nullptr){
                temp->left = new tree(data);
              break;
            }
        else
        {
            temp = temp->left;
        }
            }
            else{
                if(temp->right == nullptr){
                temp->right = new tree(data);
                break;}
                
            else{
                temp=temp->right;
            }
        }
        
            
        }
    }
    return root;
}
void inorder(tree* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int getheight(tree* root){
    if(root == nullptr){
        return -1;
    }
    else{
        int right = getheight(root->right);
        int left = getheight(root->left);
        return max(right , left)+1;
    }
}
int main(){
    tree *root = nullptr;
   root =  insert(25 , root);
   root =  insert(56 , root);
   root =  insert(24 , root);
   root =  insert(21 , root);
   root =  insert(22 , root);
   inorder(root);
   cout<<endl;
   cout<<getheight(root);
}