#include <bits/stdc++.h>
using namespace std;
int proofn(int n){
    if(n==1){
        return 1;
    }
    return n*proofn(n-1);
}