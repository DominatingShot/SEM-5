#include <bits/stdc++.h>
using namespace std;
bool checksorted(vector<int> &v,int i){
    if(i==v.size()-1){
        return true;
    }
    if(v[i]>v[i+1]){
        return false;
    }
    return checksorted(v,i+1);
}
#O(n)
