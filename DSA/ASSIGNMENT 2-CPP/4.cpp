#include <bits/stdc++.h>
using namespace std;
void mergesort(vector<int> &v, int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergesort(v,l,mid);
        mergesort(v,mid+1,r);
        merge(v,l,mid,r);
    }
}
void merge(vector<int> &v, int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int L[n1], R[n2];
    for(int i=0;i<n1;i++){
        L[i] = v[l+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = v[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            v[k] = L[i];
            i++;
        }
        else{
            v[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        v[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        v[k] = R[j];
        j++;
        k++;
    }
}