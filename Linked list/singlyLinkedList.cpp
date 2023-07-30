#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    Node* temp = new Node(data);
    Node* trav = head;
    int count = 1;
    //case of head
    if(position==1){
    insertAtHead(head,data);
    return;
    }
    //case of middle
    while(count<position-1){
        trav = trav->next;
        count++;
    }
    //case of tail 
    if(trav->next == NULL){
        trav->next = temp;
        temp->next= NULL;
        tail = temp;
        return;
    }
    temp->next = trav->next;
    trav->next = temp;
}
// So in this we make copy of original ll when we call
// void print(Node* head){
//     while(head!= NULL){
//         cout<<head->data<<endl;
//         head = head->next;
//     }
// }

// I have used a reference 
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
