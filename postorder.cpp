
// Implementing the fucttion of postorder-traversal

// postorder traversal = (LRN) => Left Right Node

void postorder(node* root){

    if(root == NULL){
        return;
    }

    
    cout << root -> data << " ";
    postorder(root -> left);
    postorder(root -> right);

}