#include<iostream>
#include<queue>
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

node* leveInput() {
	queue<node*> q;
	int data;
	cin >> data;
	if (data == -1) {
		return NULL; 
	}

	node* root = new node(data);
	q.push(root);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();

		int l, r;
		cin >> l >> r;

		if (l != -1) {
			f->left = new node(l);
			q.push(f->left);
		}
		if (r != -1) {
			f->right = new node(r);
			q.push(f->right);
		}
	}

	return root;
}

void levelOrderTraversal(node* root) {
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();
		if (f != NULL) {
			cout << f->data << " ";
			if (f->left != NULL) {
				q.push(f->left);
			}
			if (f->right != NULL) {
				q.push(f->right);
			}
		}
		else {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}

void leafNodePrint(node* root){
	queue<node*> q;
	q.push(root);

	while (!q.empty()){
		
		node* p = q.front();
		if (p -> left == NULL and p -> right == NULL) cout << p->data << " ";
		q.pop();

		if (p->left != NULL) q.push(p->left);
        if (p->right != NULL) q.push(p->right);

		
	}
}

int main() {

	node* root = leveInput();
	leafNodePrint(root);

	return 0;
}