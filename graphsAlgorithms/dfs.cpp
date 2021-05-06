//print every element using DFS
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    vector<Node *> children;
    Node() {}
    Node(int val)
    {
        this->val = val;
    }
    Node(int val, vector<Node *> children)
    {
        this->val = val;
        this->children = children;
    }
};
void printByDfs(Node *root)
{
    cout << root->val << " ";
    for (auto child : root->children)
    {
        printByDfs(child);
    }
}
int main()
{

    Node *root = new Node(1);

    root->children.push_back(new Node(2));
    root->children[0]->children.push_back(new Node(5));
    root->children[0]->children.push_back(new Node(6));

    root->children.push_back(new Node(3));
    root->children[1]->children.push_back(new Node(7));
    root->children[1]->children.push_back(new Node(8));

    root->children.push_back(new Node(4));
    root->children[2]->children.push_back(new Node(9));

    printByDfs(root);
}