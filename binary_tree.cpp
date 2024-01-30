#include<iostream>
#include<queue>
using namespace std;

//Defining a class the name of class is node
class node{
    //All data member are public
    public:
    int data;
    node* left;
    node* right;

    //defining the constructor within the class
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    //Enter the the in new Node
    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    //Inserting the data in left side using recursion
    cout << "Enter data for insert in left side " << data << endl;
    root -> left = buildTree(root -> left);

    //Inserting the data in right side using recursion
    cout << "Enter data for insert in right side " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}



int main(){

    node* root = NULL;

    root = buildTree(root);

    return 0;
}