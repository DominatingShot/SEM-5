#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArrayktimes(vector<int>& nums,int k) {
        vector<int> temp;
        while(k--){
            temp.insert(nums.end(),nums.begin(),nums.end());
        }
        nums=temp;
        int sum = 0, smax = INT_MIN;
        for (int num : nums) {
            sum += num;
            smax = max(smax, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return smax;
    }
};