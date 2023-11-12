#include <bits/stdc++.h>
using namespace std;
void reverseprint(vector<int> &v,int i){
    if(i==v.size()){
        return;
    }
    reverseprint(v,i+1);
    cout<<v[i]<<" ";
}

#O(n)
