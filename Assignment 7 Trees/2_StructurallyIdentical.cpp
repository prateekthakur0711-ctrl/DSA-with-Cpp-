#include <iostream>
#include <string>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = right = NULL;
    }
};

node* createTree() {
    int data;
    cin >> data;

    node* root = new node(data);

    string leftFlag;
    cin >> leftFlag;
    if (leftFlag == "true") {
        root->left = createTree();
    } 
    else {
        root->left = NULL;
    }

    string rightFlag;
    cin >> rightFlag;
    if (rightFlag == "true") {
        root->right = createTree();
    } 
    else {
        root->right = NULL;
    }

    return root;
}



bool isIdentical(node* r1, node* r2) {
    if (r1 == NULL && r2 == NULL)
        return true;

    if (r1 == NULL || r2 == NULL)
        return false;

    return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
}

int main() {
    
    node* root1 = createTree();

    node* root2 = createTree();

    cout << (isIdentical(root1, root2) ? "true" : "false");

    return 0;
}