#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    // adj[v].push_back(u); //comment if graph is undirected graph
}
void bfs(vector<int> adj[], int v, int N, bool visited[])
{

    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();
        if (!visited[currentNode])
        {
            visited[currentNode] = 1;
            for (int i = 0; i < adj[currentNode].size(); i++)
            {
                q.push(adj[currentNode][i]);
                cout << v << endl;
            }
        }
    }
}
int main()
{
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 2, 1);
    addEdge(adj, 3, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    bool visited[6] = {0, 0, 0, 0, 0, 0};
    bfs(adj, 1, V, visited);
    for (int i = 0; i < V; i++)
    {
        cout << visited[i] << " ";
    }

    return 0;
}