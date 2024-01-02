#include <bits/stdc++.h>
using namespace std;
int printlongestincreasingsubsequence(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums[i]>nums[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int i = 1;
    for(int j=0;j<n;j++){
        if(dp[j]==i){
            cout<<nums[j]<<" ";
            i++;
        }

    }
    cout<<endl;
    return *max_element(dp.begin(),dp.end());
}
int main(){
    int n;
    cin>>n;
    vector<int> nums{1,2,6,6,1,3,8,2};
    printlongestincreasingsubsequence(nums);
}