#include <bits/stdc++.h>
using namespace std;
void findelement(vector<int> v,int k){
    for(int i=0;i<v.size();i++){
        if(v[i]==k){
            cout<<"found";
            return;
        }
    }
    cout<<"not found";
}