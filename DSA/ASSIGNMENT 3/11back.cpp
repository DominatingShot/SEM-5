#include <bits/stdc++.h>
using namespace std;

vector<int> scores = {3, 5, 10};
vector<int> dp;

int maxways(int s) {
    if (s == 0) {
        return 1;
    }
    if (s < 0) {
        return 0;
    }
    if (dp[s] != -1) {
        return dp[s];
    }

    int ans = 0;
    for (int i = 0; i < scores.size(); i++) {
        ans += maxways(s - scores[i]);
    }

    return dp[s] = ans;
}

int main() {
    int s;
    cout << "Enter the target score: ";
   

    // Initialize dp array with -1
    dp.assign(20 + 1, -1);

    cout << "Number of ways to reach score " << 20 << ": " << maxways(s) << endl;

    return 0;
}
