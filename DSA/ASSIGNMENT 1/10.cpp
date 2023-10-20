#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> v1 , vector<int> v2){
    vector<int> v;
    int i=0,j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            v.push_back(v1[i]);
            i++;
        }
        else{
            v.push_back(v2[j]);
            j++;
        }
    }
    while(i<v1.size()){
        v.push_back(v1[i]);
        i++;
    }
    while(j<v2.size()){
        v.push_back(v2[j]);
        j++;
    }
    return v;
}