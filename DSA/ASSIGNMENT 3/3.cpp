#include <bits/stdc++.h>
using namespace std;
int maxdifferenceofsubsetsizek(vector<int> v,int k){
    int n=v.size();
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    int maxsum=sum;
    int minsum=sum;
    for(int i=k;i<n;i++){
        sum+=v[i]-v[i-k];
        maxsum=max(maxsum,sum);
        minsum=min(minsum,sum);
    }
    cout<<maxsum<<" "<<minsum<<endl;
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