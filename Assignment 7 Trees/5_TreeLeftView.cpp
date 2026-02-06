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

void leftView(node* root) {
    queue<node*> q;
	q.push(root);

	while (!q.empty()){
		int lev = q.size();

		for (int i = 0; i < lev; ++i)
		{
			node* p = q.front();
			q.pop();

			if (i == 0){ // for right view it will just be last element of each level
				cout << p -> data << " ";
			}

			if (p->left != NULL) q.push(p->left);
			if (p->right != NULL) q.push(p->right);
		}
	}
}

int main() {
	
	node *root = leveInput();
	leftView(root);

	return 0;
}