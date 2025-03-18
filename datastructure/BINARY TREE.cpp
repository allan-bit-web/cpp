#include <iostream>
using namespace std;

// Definition of a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
    data = value;
    left = NULL;
    right = NULL;
    }

};

// In-order Traversal: Left -> Root -> Right
void inOrderTraversal(Node* root) {
    if (root == NULL) return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Pre-order Traversal: Root -> Left -> Right
void preOrderTraversal(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Post-order Traversal: Left -> Right -> Root
void postOrderTraversal(Node* root) {
    if (root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// Example usage
int main() {
    // Constructing a simple binary tree:
    //         5
    //        / \
    //       3   6
    //      / \
    //     2    4
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    cout<<"  5"<<endl;
    cout<<" /" <<" \\"<<endl;
     cout<<"3" <<"  6"<<endl;
     cout<<"/" <<"\\"<<endl;
      cout<<"2" <<" 4"<<endl;



    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}

