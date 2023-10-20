#include <bits/stdc++.h>
using namespace std;
void notlargenorsmall(vector<int> v){
    if(v.size()<3){
        cout<<"Invalid Input";
        return;
    }
    if(v[0]<v[1] && v[1]<v[2]){
        cout<<v[1];
        return;
    }
    else if(v[1]<v[0] && v[0]<v[2]){
        cout<<v[0];
        return;
    }
    cout<<v[2];
    return;
}
