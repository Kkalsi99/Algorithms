#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    // adj[v].push_back(u); //comment if graph is undirected graph
}
void dfs(vector<int> adj[], int v, int N, bool visited[])
{
    visited[v] = 1;
    cout << v << endl;

    for (int i = 0; i < adj[v].size(); i++)
    {
        if (!visited[adj[v][i]])
            dfs(adj, adj[v][i], N, visited);
    }
}
int main()
{
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 4);
    addEdge(adj, 4, 3);
    addEdge(adj, 4, 5);
    bool visited[] = {0, 0, 0, 0, 0, 0};
    dfs(adj, 1, V, visited);
    int count = 0;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            dfs(adj, i, V, visited);
            visited[i] = 0;
        }
    }

    for (int i = 0; i < V; i++)
    {
        cout << visited[i] << " ";
    }
    cout << endl
         << count;

    return 0;
}