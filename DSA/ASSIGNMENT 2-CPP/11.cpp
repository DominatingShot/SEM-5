#include <bits/stdc++.h>
using namespace std;
void natn(int n){
    if(n==0){
        return;
    }
    natn(n-1);
    cout<<n<<" ";
}
# O(n)
