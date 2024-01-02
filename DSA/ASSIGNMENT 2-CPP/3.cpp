#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
    int helper(vector<int>& nums, int l, int r){
        if(l==r){
            return nums[l];
        }
        int mid = (l+r)/2;
        int left = helper(nums,l,mid);
        int right = helper(nums,mid+1,r);
        int leftwaysum = INT_MIN;
        int rightwaysum = INT_MIN;
        for(int i=mid;i>=l;i--){
            leftwaysum = max(leftwaysum,nums[i]);
        }
        for(int i=mid+1;i<=r;i++){
            rightwaysum = max(rightwaysum,nums[i]);
        }
        int cross = leftwaysum+rightwaysum;
        return max(max(left,right),cross);
    }
};
