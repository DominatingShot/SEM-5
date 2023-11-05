#include <bits/stdc++.h>
using namespace std;
void quicksort(vector<int> &v, int l, int r){
    if(l<r){
        int p = partition(v,l,r);
        quicksort(v,l,p-1);
        quicksort(v,p+1,r);
    }
}
int partition(vector<int> &v, int l, int r){
    int pivot = v[r];
    int i = l-1;
    for(int j=l;j<r;j++){
        if(v[j]<pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[r]);
    return i+1;
}
