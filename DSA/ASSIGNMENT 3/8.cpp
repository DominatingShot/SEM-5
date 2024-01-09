#include <bits/stdc++.h>
using namespace std;
int matrixchainmultiplication(vector<int> &arr, int n)
{
    vector<vector<int>> dp(n, vector<int>(n, 0));
    int i, j, k, L, q;
    for (i = 1; i < n; i++)
        dp[i][i] = 0;
    for (L = 2; L < n; L++)
    {
        for (i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            dp[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                q = dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                dp[i][j] = min(dp[i][j], q);
            }
        }
    }
    return dp[1][n - 1];
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i <= n; i++)
    {
        cin >> v[i];
    }
    cout << matrixchainmultiplication(v, n);
    return 0;
}