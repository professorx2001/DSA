//Binary Tree
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

//Function to create Binary tree. -1 is taken as NULL you can edit it to NULL.
Node* buildTree (Node* &root){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;
    root = new Node(data);

    if(data == -1){
    return NULL;
    }

    cout<<"Enter the data for inserting at left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data for inserting at right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}
