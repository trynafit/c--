#include<iostream>
using namespace std;
class tree{
    public:
    tree *left;
    tree *right;
    int data;
    int height;
    tree(int value){
        left = nullptr;
        right = nullptr;
        data = value;
    }
};
int getheight(tree* root){
    if(root == nullptr){
        return 0;
    }
    else{
        int right = getheight(root->right);
        int left = getheight(root->left);
        return max(right , left)+1;
    }
}
int getbalancefactor(tree* root){
    if (root == nullptr){
        return 0;
    }
    int left = getheight(root->left);
    int right = getheight(root->right);
    return left-right;
}
tree* rightrotate(tree*root){//left heavy
 tree* x = root->left;
 tree* temp = x->right;
 x->right = root;
 root->left = temp;
return x;
}
tree* leftrotate(tree*root){
 tree* x = root->right;
 tree* temp = x->left;
 x->left = root;
 root->right = temp;
return x;
}
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
                temp=temp->right; }}}}
    int balance = getbalancefactor(root);
    root->height = max(getheight(root->left), getheight(root->right)) + 1;
    if (balance > 1 && data < root->left->data)
        return rightrotate(root);

    // Right Heavy (Left Rotation)
    if (balance < -1 && data > root->right->data)
        return leftrotate(root);

    // Left-Right Case (Left Rotate + Right Rotate)
    if (balance > 1 && data > root->left->data) {
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }

    // Right-Left Case (Right Rotate + Left Rotate)
    if (balance < -1 && data < root->right->data) {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }

    return root; // Return unchanged root
}

void inorder(tree* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    tree *root = nullptr;
   root =  insert(10 , root);
   root =  insert(9 , root);
   root =  insert(8 , root);
   root =  insert(7 , root);
   root =  insert(6 , root);
   inorder(root);
   cout<<endl;
   cout<<getheight(root);
}