#include <bits/stdc++.h>
using namespace std;
int fib(int n,int a=1,int b=1){
    if(n==0){
        return a;
    }
    if(n==1){
        return b;
    }
    return fib(n-1,b,a+b);
}
# O(2^n)
 
