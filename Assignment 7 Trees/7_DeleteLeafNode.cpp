#include <iostream>
#include <queue>
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

node* deleteLeafNode(node* root){
	if (root == NULL) return NULL;

	if (root->left == NULL && root->right == NULL){
		delete root;
		return NULL;
	}

	root->left = deleteLeafNode(root->left);
	root->right = deleteLeafNode(root->right);

	return root;
}

void display(node* root) {
    if (root == NULL) return;

    if (root->left)
        cout << root->left->data;
    else
        cout << "END";

    cout << " => " << root->data << " <= ";

    if (root->right)
        cout << root->right->data;
    else
        cout << "END";

    cout << endl;

    display(root->left);
    display(root->right);
}



int main() {
    
    node* root = createTree();
	node* rt = deleteLeafNode(root);

	display(rt);

    return 0;
}