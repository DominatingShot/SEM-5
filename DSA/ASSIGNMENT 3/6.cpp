#include <bits/stdc++.h>
using namespace std;
int maxprofit(vector<int> &weights,vector<int> &profits,int capacity,int n){
    if(n==0 || capacity==0){
        return 0;
    }
    if(weights[n-1]<=capacity){
        return max(profits[n-1]+maxprofit(weights,profits,capacity-weights[n-1],n-1),maxprofit(weights,profits,capacity,n-1));
    }
    else{
        return maxprofit(weights,profits,capacity,n-1);
    }
    
 
}