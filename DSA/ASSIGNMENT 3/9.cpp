#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) {
    int st=0;
    int end=0;
    int n=s.length();
    vector<vector<bool>> dp(n,vector<bool>(n,false));
    for(int i=0;i<n;i++){
        dp[i][i]=true;
        for(int j=0;j<i;j++){
            if(s[i]==s[j] && (i-j<=2 || dp[j+1][i-1])){
                dp[j][i]=true;
                if(i-j>end-st){
                    st=j;
                    end=i;
                }
            }
        }
    }
    return s.substr(st,end-st+1);    
}