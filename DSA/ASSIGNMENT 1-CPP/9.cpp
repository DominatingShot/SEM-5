#include <bits/stdc++.h>
using namespace std;
void splithighlow(vector<int> v){
    vector<int> high;
    vector<int> low;
    int x=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>=x){
            high.push_back(v[i]);
        }
        else{
            low.push_back(v[i]);
        }
    }
}