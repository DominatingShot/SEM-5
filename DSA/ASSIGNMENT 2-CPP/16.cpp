#include <bits/stdc++.h>
using namespace std;
void reversenum(int n){
    if(n<10){
        cout<<n;
        return;
    }
    cout<<(n%10);
    reversenum(n/10);
}
int main(){
    int n;
    cin>>n;
    reversenum(n);
    return 0;
}