#include <iostream>
#include <queue>
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
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" "; 
    }
}
template<typename T>
void levelOrderTravesal(node<T>*&root){
    if(root == nullptr) return;
    queue<node<T>*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node<T>*temp = q.front();
        q.pop();
        if(temp!=NULL){
            cout<<temp->data<<" ";
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
    }
}

template<typename T>
int levelOrderSum(node<T>*& root, int K) {
    if (root == nullptr) return 0; 
    queue<node<T>*> q;
    q.push(root);
    q.push(nullptr);
    int sum = 0;
    int level = 0;  
    while (!q.empty()) {
        node<T>* temp = q.front();
        q.pop();     
        if (temp != nullptr) {
            if (level == K) {
                sum += temp->data;
            }
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        } else if (!q.empty()) {
            q.push(nullptr);
            level++;
        }
    }   
    return sum;
}
template<typename T>
int countNodes(node<T>*&root){
    if(root == nullptr) return 0;
    return countNodes(root->left) + countNodes (root->right) +1;
}
template<typename T>
int sumOfNodes(node<T>*&root){
    if(root == nullptr) return 0;
    int sum = root->data;
    sum += sumOfNodes(root->left);
    sum += sumOfNodes(root->right);
    return sum;
}
template<typename T>
int heightOfTree(node<T>*&root){
    if(root == nullptr) return 0;
    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);
    return max(leftHeight,rightHeight)+1;
}
template<typename T>
int replaceValueWithSumOfSubTree(node<T>*&root){
    if(root==nullptr) return 0;
    int sumleft = 0,sumright = 0;
    sumleft = replaceValueWithSumOfSubTree(root->left);
    sumright = replaceValueWithSumOfSubTree(root->right);
    root->data = sumleft+sumright+root->data;
    return root->data;
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
    cout<<endl<<"Levelorder:"<<endl;
    levelOrderTravesal(root);
    cout<<endl<<"Sum at Level 'k':"<<endl;
    cout<<levelOrderSum(root,1);
    cout<<endl<<"The number of nodes:"<<endl;
    cout<<countNodes(root);
    cout<<endl<<"The sum of nodes:"<<endl;
    cout<<sumOfNodes(root);
    cout<<endl<<"Height of the tree:"<<endl;
    cout<<heightOfTree(root);
    replaceValueWithSumOfSubTree(root);
    cout<<endl<<"Levelorder:"<<endl;
    levelOrderTravesal(root);
    return 0;
}