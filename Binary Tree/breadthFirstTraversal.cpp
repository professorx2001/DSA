// If you want to print in a Single line
void breadthFirstSearch(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}


//If you want to print like a tree(BFS) 
void breadthFirstSearchTree(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        // !mportant step for tree like structure
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
        }
    }
}
