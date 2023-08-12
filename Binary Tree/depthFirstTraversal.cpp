//Recursive code for all three Depth first traversal (Pre, In, Post)
// printNode Left Right
void preOrderTraversal(Node* root){
    if(root==NULL) return;

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

//Left printNode Right
void inorderTraversal(Node* root){
    if(root==NULL)
    return;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

//Left Right printNode
void postOrderTraversal(Node* root){
    if(root==NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
