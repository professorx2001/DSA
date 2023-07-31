//Doubly Linked list
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
    ~Node(){
        if(next!= NULL){
            delete next;
            next = NULL;
        }
    }
};

// Traversal
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}


int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}


void insertAtHead(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}



void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}


void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    if(position>getLength(head)){
        cout<<"Out of bound, not enough length of your Linked list"<<endl;
        return;
    }
    Node* temp = new Node(data);
    Node* curr = head;
    if(position==1){
        insertAtHead(head,tail, data);
        return;
    }
    int count = 1;
    //Do position or position-1 according to your need.
    while(count<position){
        curr = curr->next;
        count++;
    }
    //insertion at tail
    if(curr->next == NULL){
        insertAtTail(head, tail, data);
        return ;
    }
    //insertion at middle
    temp->prev = curr;
    temp->next = curr->next;
    (curr->next)->prev = temp;
    curr->next = temp;
}



void deleteNode (Node* &head,Node* &tail, int position){
    Node*temp = head;
    //for head node
    if(position==1){
        temp->next->prev = NULL;
        head = head->next;
        // head = temp->next;
        temp->next = NULL;
        delete temp;
        cout<<"Deleted "<<endl;
        return;
    }
    else{
        //for mid and last/tail node
        Node* curr = head;
        int count =0;
        while(count<position-1){
            curr = curr->next;
            count++;
        }
        if(curr->next == NULL){
            tail = curr->prev;
            curr->prev->next = NULL;
            curr->prev = NULL;
            curr->next = NULL;
            cout<<"Deleted value "<<curr->data<<endl;
            delete curr;
            return;
        }
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        curr->next = NULL;
        curr->prev = NULL;
        cout<<"Deleted value "<<curr->data<<endl;
        delete curr;
    }

}
