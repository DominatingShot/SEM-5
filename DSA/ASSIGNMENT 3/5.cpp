#include <bits/stdc++.h>
using namespace std;
void coinchange(int n,vector<int> coins){
    vector<int> dp(n+1,INT_MAX);
    for(int i=1;i<=n;i++){
        for(int j=0;j<coins.size();j++){
            if(coins[j]<=i){
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
    }
    if(dp[n]==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<dp[n]<<endl;
    }
    
}