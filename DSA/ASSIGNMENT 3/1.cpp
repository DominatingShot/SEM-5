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
                   lmax=currl;
                sum = 0;
                currl = 0;  
            }
            if(sum==smax)
                   lmax=currl;
        }
        cout<<lmax<<endl;
        return smax;
    }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v.at(i);
    }
    cout<<maxSubArray(v);
    return 0;
}