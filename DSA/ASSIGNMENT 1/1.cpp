#include <bits/stdc++.h>
using namespace std;
int minarray(vector<int> arr){
    int min = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
}