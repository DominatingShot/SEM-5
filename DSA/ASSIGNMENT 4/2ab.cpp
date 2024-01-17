#include <bits/stdc++.h>
using namespace std;
bool bfsloopdetect(unordered_map<int, vector<int>> &adj, int s, int n)
{
    vector<bool> visited(n + 1, false);
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
            else
            {
                return true;
            }
        }
    }
    return false;
}
bool dfsloopdetect(unordered_map<int, vector<int>> &adj, int s, int n)
{
    vector<bool> visited(n + 1, false);
    stack<int> st;
    visited[s] = true;
    st.push(s); 
    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                st.push(v);
            }
            else
            {
                return true;
            }
        }
    }
    return false;
}