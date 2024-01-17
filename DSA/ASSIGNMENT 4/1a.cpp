// bfs
#include <bits/stdc++.h>
using namespace std;
void bfs(vector<int> adj[], int s, int n)
{
    bool visited[n + 1];
    for (int i = 0; i < n; i++)
        visited[i] = false;
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
