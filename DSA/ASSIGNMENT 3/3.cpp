#include <bits/stdc++.h>
using namespace std;
int maxdifferenceofsubsetsizek(vector<int> v,int k){
    sort(v.begin(),v.end());
    int n=v.size();
    int minsum=0,maxsum=0;
    for(int i=0;i<k;i++){
        minsum+=v[i];
    }
    for(int i=n-1;i>=n-k;i--){
        maxsum+=v[i];
    }
    return maxsum-minsum;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxdifferenceofsubsetsizek(v,k);
    return 0;
}