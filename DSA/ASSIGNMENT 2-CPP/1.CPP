#include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

# a. O(n^2)
# b. Flag
# c. Best: Sorted, Worst: Reverse
