#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

node* insert(node* root, int d){
    node* n = new node(d);
    if (root == NULL) return n;

    queue <node*> q;
    q.push(root);

    while (!q.empty()){
        node* temp = q.front();
        q.pop();

        if (temp -> left == NULL){
            temp -> left = n;
            break;
        }
        else {
            q.push(temp -> left);
        }

        if (temp -> right == NULL){
            temp -> right = n;
            break;
        }
        else {
            q.push(temp -> right);
        }
    }
    return root;
}

void deleteDeepNode(node* root, node* del){
    queue<node*> q;
    q.push(root);

    while (!q.empty()){
        node* temp = q.front();
        q.pop();

        if (temp -> left != NULL){
            if (temp -> left == del){
                delete temp -> left;
                temp -> left = NULL;
                return;
            }
            else q.push(temp -> left);
        }

        if (temp -> right != NULL){
            if (temp -> right == del){
                delete temp -> right;
                temp -> right = NULL;
                return;
            }
            else q.push(temp -> right);
        }
    }
}

node* deleteNode(node* root, int key){
    if (root == NULL) return NULL;

    if (root -> left == NULL && root -> right == NULL){
        if (root -> data == key){
            delete root;
            return NULL;
        }
        else return root;
    }

    queue <node*> q;
    q.push(root);

    node* keyNode = NULL;
    node* temp;

    while (!q.empty()){
        temp = q.front();
        q.pop();

        if (temp -> data == key)   
            keyNode = temp;

        if (temp -> left) q.push(temp -> left);
        if (temp -> right) q.push(temp -> right);
    }

    if (keyNode != NULL){
        int x = temp -> data;   // deepest node data
        deleteDeepNode(root, temp);
        keyNode -> data = x;
    } 

    return root;
}

void levelOrder(node* root){
    if (!root) return;

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

int main(){
    node* root = NULL;

    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 5);

    cout << "Before Deletion: ";
    levelOrder(root);

    root = deleteNode(root, 2);

    cout << "\nAfter Deletion: ";
    levelOrder(root);

    return 0;
}
