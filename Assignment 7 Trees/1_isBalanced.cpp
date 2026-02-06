#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

pair<int,bool> isHeightBalancedOptimised(node *root)
{
    // Base case 

    if (root == NULL)
    {
        pair<int,bool> baseResult;
        baseResult.first = 0;      
        baseResult.second = true;  
        return baseResult;
    }

    // Recursive case

    pair<int, bool> left = isHeightBalancedOptimised(root -> left);
    pair<int, bool> right = isHeightBalancedOptimised(root -> right);

    pair <int, bool> ans;
    ans.first = max(left.first, right.first) + 1;

    if (left.second == true and right.second == true and abs(left.first - right.first) <= 1){
        ans.second = true;
    }
    else {
        ans.second = false;
    }
    return ans;
}

int main()
{
    node *root = build("true");

    cout << boolalpha << isHeightBalancedOptimised(root).second;

    return 0;
}
