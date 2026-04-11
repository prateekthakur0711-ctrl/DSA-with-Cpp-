#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    int height;

    node(int value){
        data = value;
        left = NULL;
        right = NULL;
        height = 1; 
    }
};

int height(node* node){
    if(node == NULL)
        return 0;
    return node->height;
}

int balanceFactor(node* node){
    if(node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

//LL Rotation
node* rightRotate(node* y){
    node* x = y->left;
    node* z = x->right;

    x->right = y;
    y->left = z;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

//RR Rotation
node* leftRotate(node* y) {
    node* x = y->right;
    node* z = x->left;

    x->left = y;
    y->right = z;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

node* insertInAVL(node* root ,int key){

    if (root == NULL){
        return new node(key);
    }

    if (key < root->data){
        root->left = insertInAVL(root->left, key);
    }
    else if (key > root->data){
        root->right = insertInAVL(root->right, key);
    }
    else{
        return root;
    }

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = balanceFactor(root);

    // LL case
    if (balance > 1 && key < root->left->data){
        return rightRotate(root);
    }

    // RR case
    if (balance < -1 && key > root->right->data){
        return leftRotate(root);
    }

    // LR case
    if (balance > 1 && key > root->left->data){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RL case
    if (balance < -1 && key < root->right->data){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void preorder(node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

bool searchInAVL(node* root, int key){
    if (root == NULL){
        return false;
    }
    if (root->data == key){
        return true;
    }

    if (key > root->data){
        return searchInAVL(root->right, key);
    }
    else if (key < root->data){
        return searchInAVL(root->left, key);
    }
}

int main() {

    node* root = NULL;

    root = insertInAVL(root, 10);
    root = insertInAVL(root, 20);
    root = insertInAVL(root, 30);
    root = insertInAVL(root, 40);
    root = insertInAVL(root, 50);
    root = insertInAVL(root, 25);

    preorder(root);
    cout << endl;
    int key = 50;
    if (searchInAVL(root, key)){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}