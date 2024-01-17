#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[], int s, int n)
{
    bool visited[n + 1];
    for (int i = 0; i < n; i++)
        visited[i] = false;
    stack<int> st;
    visited[s] = true;
    st.push(s);
    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                st.push(v);
            }
        }
    }
}