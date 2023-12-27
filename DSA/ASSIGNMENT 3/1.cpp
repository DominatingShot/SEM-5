#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int sum = 0, smax = INT_MIN, lmax = 0, currl = 0;
        for (int num : nums) {
            sum += num;
            smax = max(smax, sum);
            currl++;
            if (sum < 0) {
                if(sum==smax)
                   lmax =currl;
                sum = 0;
                currl = 0;  
            }
            if(sum==smax)
                   lmax =currl;
        }
        cout<<lmax;
        return smax;
    }