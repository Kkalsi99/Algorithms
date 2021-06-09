#include <bits/stdc++.h>
using namespace std;
bool comparator(pair<long long, pair<int, int>> E1, pair<long long, pair<int, int>> E2)
{
    return E1.first < E2.first;
}

int main()
{
    int x, y;
    vector<pair<long long, pair<int, int>>> E;
    long long cost, minCost, weight;
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        cin >> x >> y >> weight;
        E.push_back(make_pair(weight, make_pair(x, y)));
    }
    sort(E.begin(), E.end(), comparator);
}