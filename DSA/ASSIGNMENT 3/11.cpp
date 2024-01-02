#include <bits/stdc++.h>
using namespace std;

int maxways(int s){
    vector<int> scores{3,5,10};
    vector<int> dp(s+1,0);
    dp[0]=1;
    for(int i=1;i<=s;i++){
        for(int j=0;j<scores.size();j++){
            if(scores[j]<=i){
                dp[i]=dp[i]+dp[i-scores[j]];
            }
        }
    }
    return dp[s];
    
}
int main(){
    int s;
    cout<<maxways(15)<<endl;
}