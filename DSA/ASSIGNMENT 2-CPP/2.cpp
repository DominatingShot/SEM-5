#include <bits/stdc++.h>
using namespace std;
void selectionsort(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min]){
                min = j;
            }
        }
        swap(v[i],v[min]);
    }
}

#a. O(n^2)  
#b. Same  
#c. Best: Sorted, Worst: Reverse
