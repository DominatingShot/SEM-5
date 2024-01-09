#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartition2Subsets(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        sort(nums.rbegin(),nums.rend());   
        for(int i=0;i<nums.size();i++)
        {
            if(sum1<=sum2)
            {
                sum1+=nums[i];
            }
            else
            {
                sum2+=nums[i];
            }
        }
        if(sum1==sum2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};