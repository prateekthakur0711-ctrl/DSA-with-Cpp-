#include <iostream>
#include<queue>
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

void sibling(node* root){
	queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* p = q.front();
        q.pop();

        if (p->left && !p->right) {
            cout << p->left->data << " ";
        }

        if (p->right && !p->left) {
            cout << p->right->data << " ";
        }

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }

}

int main() {
    
    node* root = createTree();
	sibling(root);

    return 0;
}