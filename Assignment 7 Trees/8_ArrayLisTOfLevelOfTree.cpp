#include <iostream>
#include<vector>
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

vector<vector<int>> arrayList(node* root){
	vector<vector<int>> res;
	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		vector<int> level;
		int s = q.size();

		for (int i = 0; i < s; ++i)
		{
			node* p = q.front();
			q.pop();

			level.push_back(p->data);
			
			if (p->left != NULL) q.push(p->left);
			if (p->right != NULL) q.push(p->right);
		}
		res.push_back(level);
	}
	return res;
}

void printList(vector<vector<int>> &res) {
	cout << "[";
	for (int i = 0; i < res.size(); ++i)
	{
		cout << "[";
		for (int j = 0; j < res[i].size(); ++j)
		{
			cout << res[i][j];
			if (j != res[i].size() - 1) cout << ", ";
		}
		cout << "]";
		if (i != res.size() - 1) cout << ", ";
	}

	cout << "]";
}

int main() {
    
    node* root = createTree();
	vector<vector<int>> result = arrayList(root);
	printList(result);

    return 0;
}