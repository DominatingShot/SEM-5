#include <bits/stdc++.h>
using namespace std;
void binarysearch(int l,int r,vector<int> v,int x){
    if(l<=r){
        int mid = (l+r)/2;
        if(v[mid]==x){
            cout<<"found";
        }
        else if(v[mid]>x){
            binarysearch(l,mid,v,x);
        }
        else if(v[mid]<x){
            binarysearch(mid,r,v,x);
        } 
    }
    else{
        cout<<"not found";
    }
}