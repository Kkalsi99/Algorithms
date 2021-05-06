//print every element using BFS
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    vector<Node *> children;
    Node() {}
    Node(int _val)
    {
        val = _val;
    }
    Node(int val, vector<Node *> children)
    {
        this->val = val;
        this->children = children;
    }
};
void printByBfs(Node *root)
{
    queue<Node *> q;
    q.push(root);
    cout << root->val << " ";
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *currentNode = q.front();
            q.pop();
            for (auto child : currentNode->children)
            {
                q.push(child);
                cout << child->val << " ";
            }
        }
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

    printByBfs(root);
}