#include <bits/stdc++.h>
using namespace std;
void distinctelements(vector<int> v){
    map<int,int> m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
        if(m[v[i]]==1){
            cout<<v[i]<<" ";
        }
    }
    
}