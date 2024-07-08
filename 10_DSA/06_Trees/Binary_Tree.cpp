#include <iostream>
using namespace std;

template<class T>
class node{
    public:
    T data;
    node*left;
    node*right;
    node(T data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

template<typename T>
void insertIntoTree(node<T>*&root,T data){
    node<T>*temp = new node(data); 
    if(root == nullptr){
        root = temp;
        return;
    }else{
        if(root->data<data){
            insertIntoTree(root->right,data);
        }else if(root->data>data){
            insertIntoTree(root->left,data);
        }else if(root->data == data){
            cout<<"Elements must be unique in a binary tree";
            return;
        }
    }
}

template<typename T>
void inorderTraversal(node<T>*&root){
    if(root == nullptr) return;
    else{
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
}

template<typename T>
void preorderTraversal(node<T>*&root){
    if(root == nullptr) return;
    else{
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

template<typename T>
void postorderTraversal(node<T>*&root){
    if(root == nullptr) return;
    else{
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        cout<<root->data<<" "; 
    }
}
int main() {
    node<int>*root = nullptr;
    insertIntoTree(root,10);
    insertIntoTree(root,11);
    insertIntoTree(root,67);
    insertIntoTree(root,2);
    insertIntoTree(root,3);
    cout<<"Inorder:"<<endl;
    inorderTraversal(root);
    cout<<endl<<"Postorder:"<<endl;
    postorderTraversal(root);
    cout<<endl<<"Preorder:"<<endl;
    preorderTraversal(root);
    return 0;
}