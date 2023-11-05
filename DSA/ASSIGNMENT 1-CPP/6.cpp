#include <bits/stdc++.h>
using namespace std;
void checkprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"not prime";
            return;
        }
    }
    cout<<"prime";
}