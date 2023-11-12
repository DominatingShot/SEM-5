#include <bits/stdc++.h>
using namespace std;
void natn(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    natn(n-1);
}
# O(n)
