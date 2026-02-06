#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(const vector<int>& values) {
    if (values.empty() || values[0] == -1) return nullptr;

    queue<TreeNode*> nodeQueue;
    TreeNode* root = new TreeNode(values[0]);
    nodeQueue.push(root);
    size_t index = 1;

    while (!nodeQueue.empty() && index < values.size()) {
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();

        if (index < values.size() && values[index] != -1) {
            node->left = new TreeNode(values[index]);
            nodeQueue.push(node->left);
        }
        index++;

        if (index < values.size() && values[index] != -1) {
            node->right = new TreeNode(values[index]);
            nodeQueue.push(node->right);
        }
        index++;
    }

    return root;
}
// You need to implement this function to return a list of lists representing 
vector<vector<int>> levelOrderTraversal(TreeNode* root) {
    vector<vector<int>> result;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();
        vector<int> level;

        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            level.push_back(node->val);

            if (node->left != nullptr)
                q.push(node->left);
            if (node->right != nullptr)
                q.push(node->right);
        }

        result.push_back(level);
    }

    return result;
}

int main() {
    vector<int> values;
    string input;

   
    while (getline(cin, input)) {
        if (input == "done") break;
        stringstream ss(input);
        int num;
        while (ss >> num) {
            values.push_back(num);
        }
    }

    TreeNode* root = buildTree(values);
    vector<vector<int>> levels = levelOrderTraversal(root);

    for (const auto& level : levels) {
        for (int n : level) {
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}
