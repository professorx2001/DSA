class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
    ~Node(){
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
    }
};


void insertNode(Node* &tail, int data, int value){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
        return;
    }
    else{
        Node* temp = new Node(data);
        Node* curr = tail;
        while(curr->data!= value){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}



void deleteByValue(Node* &tail, int value){
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data!=value){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    //case for one node in linked list
    if(curr == prev){
        tail = NULL;
    }
    //in case of tail deletion
    if(curr == tail){
    tail = prev;
    }
    curr->next = NULL;
    cout<<"Deleted "<<curr->data<<endl;
    delete curr;
}
void print(Node* tail){
    //handling a case where there is no node
    if(tail == NULL){
    cout<<"Linked list is empty "<<endl;
    return;
    }

    Node* temp = tail;
    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    } while (tail!=temp);
    
}
