#include <iostream>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node*next;
    node(T data){
        this->data = data;
        next = NULL;
    }
};

template<typename T>
void insert_data_at_end(node<T>*&head, T data){
    node<T>*temp = new node<T>(data);
    if(head == NULL){
        head = temp;
    }else{
        node<T>*ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

template<typename T>
node<T>* floydDetectLoop(node<T>*& head) {
    if (head == NULL) return NULL;
    node<T>* slow = head;
    node<T>* fast = head;
    while (slow != NULL && fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return slow;
    }
    return NULL;
}

template<typename T>
node<T>* getStartingNodeOfLoop(node<T>*&head){
    if(head == NULL) return NULL;
    node<T>* intersection = floydDetectLoop(head);
    if(intersection == NULL) return NULL;
    node<T>* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

template<typename T>
void createLoop(node<T>*& head, int position) {
    if (head == NULL || position < 1) return;
    node<T>* loopNode = head;
    node<T>* endNode = head;
    int count = 1;
    while (count < position && loopNode->next != NULL) {
        loopNode = loopNode->next;
        count++;
    }
    while (endNode->next != NULL) {
        endNode = endNode->next;
    }
    endNode->next = loopNode;
}

template<typename T>
void removeLoop(node<T>*&head){
    if(head == NULL) return;
    node<T>*startOfLoop = getStartingNodeOfLoop(head);
    node<T>*temp = startOfLoop;
    while(temp->next!=startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}

template<typename T>
void display(node<T>*head){
    node<T>*ptr = head;
    while (ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main() {
    node<int>* head = NULL;
    insert_data_at_end(head,1);
    insert_data_at_end(head,2);
    insert_data_at_end(head,3);
    insert_data_at_end(head,4);
    insert_data_at_end(head,5);
    createLoop(head, 2);
    node<int>*newList = getStartingNodeOfLoop(head);
    if(newList == NULL){
        cout<<"No loop\n";
    }else{
        cout<<newList->data<<endl;
    }
    removeLoop(head);
    display(head);
    return 0;
}