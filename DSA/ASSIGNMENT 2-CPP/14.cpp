#include <bits/stdc++.h>
using namespace std;
void print (vector<int> &v,int i){
    if(i==0){
        return;
    }
    print(v,i-1);
    cout<<v[i-1]<<" ";
}
#O(n)
